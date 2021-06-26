copy src\mc-aero.ico mc-aero.ico

call %QTDIR%/bin/qtenv2.bat

cd /D "%~dp0"

echo %cd%

rmdir /S /Q mc-aero

mkdir mc-aero
mkdir mc-aero\bin
mkdir mc-aero\data
copy /y bin\*.exe mc-aero\bin
xcopy data mc-aero\data /E
copy "%QTDIR%\bin\Qt5OpenGL.dll" mc-aero\bin
copy "%QWT_ROOT%\lib\qwt.dll" mc-aero\bin

rem cd qt\bin
rem call "%QTDIR%\bin\windeployqt.exe" --release mscsim.exe
rem cd ..\..
call "%QTDIR%\bin\windeployqt.exe" --release mc-aero\bin\mc-aero.exe

"C:\Program Files\7-Zip\7z.exe" a mc-aero_0.2_win64.zip -r mc-aero\

pause
