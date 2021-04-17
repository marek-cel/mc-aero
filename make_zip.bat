call run_wix_clean.bat

copy src\mc-aero.ico mc-aero.ico

call %QTDIR%/bin/qtenv2.bat

cd /D "%~dp0"

echo %cd%

rmdir /S /Q bin
rmdir /S /Q qt

mkdir bin

mkdir qt
mkdir qt\bin
copy /y bin\*.exe qt\bin
copy "%QTDIR%\bin\Qt5OpenGL.dll" qt\bin

rem cd qt\bin
rem call "%QTDIR%\bin\windeployqt.exe" --release mscsim.exe
rem cd ..\..
call "%QTDIR%\bin\windeployqt.exe" --release qt\bin\mc-aero.exe

del qt\bin\mc-aero.exe



pause
