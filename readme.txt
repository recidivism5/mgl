mgl (Minimal OpenGL) will be a set of minimal examples for popular versions of OpenGL. They require no extra files to compile.

I got tired of including stuff to get modern OpenGL contexts. So I just took glad and wrote a python script to rip all the important definitions out of it, replacing any OpenGL 1.0 functions with their declarations from gl.h.
Then I added the necessary window creation code from https://gist.github.com/mmozeiko/ed2ad27f75edf9c26053ce332a1f6647 and stripped it down, removing a lot of error checking.

The plan is to have single C files for different versions, that each compile for Windows,Linux,MacOS using buildWindows.bat,buildLinux.sh,buildMacOS.sh respectively. That is, there will be preprocessor shit to separate the platform code within the file.

So far I only have mgl20 (OpenGL 2.0) for Windows.

Build guide:
Windows: ./buildWindows.bat mgl20

For some reason, MSVC will compile mgl20 and mgl20tiny on 64 bit, but not on 32 bit, because it complains about not casting the function pointers (which I think is dumb). But anyways, I made mgl20cast, which has a function called getGLFuncs which does the proper casting, so it should compile on 32 bit (haven't tested it though).