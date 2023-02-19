@echo off
if not defined DevEnvDir (
    call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
)
cl /nologo /O1 /FC /std:c11 /w /Tc %1.c kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib dwmapi.lib Ws2_32.lib Mswsock.lib AdvApi32.lib opengl32.lib
rm %1.obj