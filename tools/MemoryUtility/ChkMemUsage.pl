#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2006
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   ChkMemUsage.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This perl is used to check memory usage. 
#*   If the memory usage is more than 95%, then warning is send back. 
#*       
#*
#* Author:
#* -------
#*   I-Chun Liu (mtk06123)
#*
#****************************************************************************/

BEGIN { push @INC, '../', './tools/', './tools/MemoryUtility/' }  # add additional library path
use systemInfo;
use LinkerOutputParser;
use CommonUtility;
use FileInfoParser;
use BasicMemInfoQuery;
use strict;
use POSIX qw(floor ceil);

#****************************************************************************
# Constants
#****************************************************************************
my $ChkMemUsage_VERNO     = " m0.02_MP7";
             # m0.02_MP7, 2014/12/25,  check if ram margin of K2 and Denali size is smaller than 1MB or not
             # m0.01 , 2014/02/26,  Initial revision

#****************************************************************************
# Global variable
#****************************************************************************
my $DebugPrint = 0;

#****************************************************************************
# Subroutine:  ChkMemUsage_verno - to query this package's version number
# Parameters:  x
# Returns:     version number string
#****************************************************************************
sub ChkMemUsage_verno
{
    return $ChkMemUsage_VERNO;
}

#****************************************************************************
# 1 >>>  Get in put parameters
#****************************************************************************
&Usage() if($#ARGV != 3);
my ($makeFile, $lds_path, $map_path, $sym_path) = @ARGV;

#****************************************************************************
# 2 >>>  Parse make file
#****************************************************************************
my %MAKEFILE_OPTIONS;
&FileInfo::Parse_MAKEFILE($makeFile, \%MAKEFILE_OPTIONS);

#****************************************************************************
# 3 >>>  ChkMemUsage
#****************************************************************************
&ChkMemUsage();

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
exit 0;

#****************************************************************************
# subroutine:  ChkMemUsage - Check memory usage. If the memory usage is more than 95%, then warning is send back. 
# Input:       x
# Output:      x
#****************************************************************************
sub ChkMemUsage
{
    my ($nPRAMUsage, $nPRAMUsageInMB, $hexPRAMUsage) = (0, 0, 0);
    my ($nPRAM, $nPRAMinMB, $hexPRAM)= (0, 0, 0);
    #my $threshold_val = 0;
	my $percentage = 95; #95%
	my $current_percentage = 0 ;
	
	my $platform = &FileInfo::get("PLATFORM", \%MAKEFILE_OPTIONS);
	print "platform = $platform\n";
	
	my $coprocessor = &FileInfo::is_with_AP(\%MAKEFILE_OPTIONS);
	print "isWithAP = $coprocessor\n";

	#get ram size 

	if($platform =~ /MT6595/) #MT6595
	{
		$nPRAM = 0x6000000; #96M		
	}
	else #MT6280, MT6290
	{
	    #$nPRAM = BasicMemInfo::DispatchCommand("GetTotalRAMUsageFromLDS", $makeFile, $lds_path, $map_path, $sym_path, undef);;
        $nPRAM = 0x3800000; #hardcode 56MB for MP7
	}
	$nPRAMinMB = $nPRAM/1024/1024;
	$hexPRAM = CommonUtil::Dec2Hex($nPRAM);
    print "MD total size limit = $nPRAM = $hexPRAM = $nPRAMinMB MB\n";

	#set threshold size
	# $threshold_val = $nPRAM; 
	# print "Threshold_val = $threshold_val (".CommonUtil::Dec2Hex($threshold_val).")\n";

    # get real end address
    &LinkerOutputParser::FileParse($sym_path);
    my $nPRAMUsage = &LinkerOutputParser::Get_DUMMY_END_Base();
    $nPRAMUsage =~ s/0x(\d)|0x(\w)/0x/g;
    $nPRAMUsage = ceil(hex($nPRAMUsage)/(1024*1024))*1024*1024;
    $nPRAMUsageInMB = $nPRAMUsage/1024/1024;
    $hexPRAMUsage = CommonUtil::Dec2Hex($nPRAMUsage);
    print "RAM usage = $nPRAMUsage = $hexPRAMUsage = $nPRAMUsageInMB MB\n";

	#get ram margin
    my ($nRAMUsage, $nRAMMargin, $nReservedSize) = BasicMemInfo::DispatchCommand("CMD_GetRAMUsage", $makeFile, $lds_path, $map_path, $sym_path, undef);
    $nRAMMargin += ($nPRAM - $nPRAMUsage);
    my $nRAMMarginMB = ($nRAMMargin/1024/1024);
    print "RAMMargin = $nRAMMargin = $nRAMMarginMB MB\n";
    

	#calculate current usage percentage
	# $current_percentage = ($nPRAMUsage * 100)/$nPRAM ;
	#my $current_percentage = sprintf "%.2f", $current_percentage;
	# print "Current usage: $current_percentage%\n";

    my $nThreshold_val_for_PRAMUsageInMB = 1;
	
    if ($nRAMMargin < $nThreshold_val_for_PRAMUsageInMB*1024*1024)
    {
        #send warning
        print "Warning: The RAM Margin $nRAMMargin ($nRAMMarginMB MB) is smaller than $nThreshold_val_for_PRAMUsageInMB MB !\n";    
    }
    else
    {
    	print "Memory usage check OK!\n";
    }
}

#****************************************************************************
# subroutine:  Usage - usage template
# Input:       x
# Output:      x
#****************************************************************************
sub Usage
{
  print <<"__EOFUSAGE";

usage: perl ChkMemUsage.pl makefile_path lds_file_path map_file_path sym_file_path 

e.g. 
perl ChkMemUsage.pl "/[path]/~MT6290E2_EVB(LWG).mak" "/[path]/ldsMT6290E2_EVB.txt" "/[path]/MT6290E2_EVB_PCB01_MT6290_S01.map" "/[path]/MT6290E2_EVB_PCB01_MT6290_S01.sym"

__EOFUSAGE

  exit 1;
}

