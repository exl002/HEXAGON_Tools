REM *********************************
REM Example to illustrate T32
REM *********************************

REM Setting Environment variables
REM set Q6_TOOLS_ROOT=C:\Qualcomm\HEXAGON_Tools\5.0
REM set PATH=%Q6_TOOLS_ROOT%\qc\bin;%PATH%
REM set PATH=%Q6_TOOLS_ROOT%\gnu\bin;%PATH%
REM set PATH=%Q6_TOOLS_ROOT%\qc\lib\iss;%PATH%
set T32SYS=C:\T32
set T32TMP=C:\T32\TEMP

REM Cleaning up the local folder
rm -f mandelbrot stats.txt

REM Building the example program
hexagon-clang -O2 -mv5 -g mandelbrot.c -o mandelbrot

REM Launch the T32 example
t32mqdsp6.exe -c win.cfg -s hexagon.cmm mandelbrot v5h
