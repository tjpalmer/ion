@echo off
setlocal

set IONHOME=%~dp0
set IONOS=win32

pushd %IONHOME%
if not exist bin (
  mkdir bin
)
if exist bin\ion.exe (
  bin\ion.exe -o out\out_ion_win32.c ion
) else (
  echo.
  echo -- No ion binary found; using previously built out/out_ion_win32.c --
  echo.
)
cl ion.c /Fe:bin\ion /Fo:bin\ion
popd

endlocal
