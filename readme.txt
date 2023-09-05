mgl20: OpenGL 2.0
mgl33: OpenGL 3.3 Core Profile

Build guide:
Windows: ./buildWindows.bat mgl20

For some reason, MSVC will compile mgl20 and mgl20tiny on 64 bit, but not on 32 bit, because it complains about not casting the function pointers (which I think is dumb). But anyways, I made mgl20cast, which has a function called getGLFuncs which does the proper casting, so it should compile on 32 bit (haven't tested it though).