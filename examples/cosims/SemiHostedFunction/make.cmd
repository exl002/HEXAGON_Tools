@set COSIM_NAME=SHFcosim
@set TESTFILE_NAME=shf

:: set necessary variables
@IF "%HEXAGON_ARCH%"=="" set HEXAGON_ARCH=v5
@for %%i in (hexagon-sim.exe) do @set SIM_PATH=%%~dp$PATH:i
@set HEX_INCLUDE=%SIM_PATH%\..\include\iss 
@set HEX_LIB_PATH=%SIM_PATH%\..\lib\iss
@for /f "delims=" %%a in ('chdir') do @set LOCAL_DIR=%%a
@IF NOT EXIST %LOCAL_DIR%\bin\windows mkdir %LOCAL_DIR%\bin\windows
@set BIN_DIR=%LOCAL_DIR%\bin\windows
@set TEST_DIR=%LOCAL_DIR%\Test_program
@set COMMON_DIR=%LOCAL_DIR%\common
@set COSIM_DIR=%LOCAL_DIR%\cosim

:: clean
@echo.
@echo Cleaning files...
@IF EXIST stats.txt @DEL stats.txt
@IF EXIST %BIN_DIR%\cosim.cfg @DEL %BIN_DIR%\cosim.cfg
@IF EXIST %BIN_DIR%\%COSIM_NAME%.dll @DEL %BIN_DIR%\%COSIM_NAME%.dll
@IF EXIST %BIN_DIR%\%TESTFILE_NAME%_test @DEL %BIN_DIR%\%TESTFILE_NAME%_test
@IF EXIST %LOCAL_DIR%\stats.txt @DEL %LOCAL_DIR%\stats.txt
@IF "%1"=="clean" @RMDIR /s /q %BIN_DIR%
@IF "%1"=="clean" GOTO End

:: build cosim
@echo.
@echo Compiling cosim...
cl /nologo /EHsc /D "WIN32" /TP /I. /MT /O2 -c /I %COMMON_DIR% /I %HEX_INCLUDE% /Fo%BIN_DIR%\%COSIM_NAME%.obj %COSIM_DIR%\%COSIM_NAME%.cpp
@echo.
@echo Linking cosim...
link /nologo /DLL /LIBPATH:%HEX_LIB_PATH% libwrapper.lib /OUT:%BIN_DIR%\%COSIM_NAME%.dll %BIN_DIR%\%COSIM_NAME%.obj
@DEL %BIN_DIR%\%COSIM_NAME%.obj
:: delete uneeded files
@IF EXIST %BIN_DIR%\%COSIM_NAME%.obj @DEL %BIN_DIR%\%COSIM_NAME%.obj
@IF EXIST %BIN_DIR%\%COSIM_NAME%.lib @DEL %BIN_DIR%\%COSIM_NAME%.lib 
@IF EXIST %BIN_DIR%\%COSIM_NAME%.exp @DEL %BIN_DIR%\%COSIM_NAME%.exp


:: build test file
@echo.
@echo Compiling test file...
hexagon-clang -m%HEXAGON_ARCH% %TEST_DIR%\%TESTFILE_NAME%.c -I.\common -o %BIN_DIR%\%TESTFILE_NAME%_test 

:: create cosim configuration file
@echo.
@echo Creating cosim.cfg file...
@echo %BIN_DIR%\%COSIM_NAME%.dll > %BIN_DIR%\cosim.cfg 

:: run the test
@echo.
@echo Running the test...
hexagon-sim --cosim_file %BIN_DIR%\cosim.cfg --timing %BIN_DIR%\%TESTFILE_NAME%_test

:End

