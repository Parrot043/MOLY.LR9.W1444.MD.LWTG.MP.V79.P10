:: :::::::::::::::::::::::::::::::::::::::::::::: ::
::  1. Kill all CVD instances
::  2. Open CVD64 to load AP tiny bootloader
::  3. Kill all CVD instances
::  4. Open CVD to load MD binary
:: :::::::::::::::::::::::::::::::::::::::::::::: ::

@ECHO off

ECHO kill all CVD.exe ...
taskkill /IM CVD.exe /F
taskkill /IM _CVD.exe /F
taskkill /IM _CVD64.exe /F

:: :::::::::::::::::::::::::::::::::::::::::::::: ::
::  Load TinyBL
:: :::::::::::::::::::::::::::::::::::::::::::::: ::

ECHO Load TinyBL ...
:C:\JnDTech\CVI\CVD64\bin\CVD64.exe
START C:\JnDTech\CVI\CVD64\bin\CVD64.exe MT6735_Load_TinyBL.csf

:: ping 3 s
::PING 127.0.0.1 -n 3 -w 1000 > nul
ECHO Press ENTER to load MD image ...
SET /p choice=">>>>>"

ECHO kill all CVD.exe ...
taskkill /IM CVD.exe /F
taskkill /IM _CVD.exe /F
taskkill /IM _CVD64.exe /F

ECHO Start MD ^(Cortex-R4^) debugger ...
START C:\JnDTech\CVI\CVD\Bin\CVD.exe MT6735_MDOnly.csf
