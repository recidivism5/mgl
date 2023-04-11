with open("./tools/chunks/20/funcPtrs.c","r") as f:
    lines = f.read().split('\n')
    names = []
    for l in lines:
        n = l.split('*')[1].split(')')[0]
        names.append(n)
        print("typedef "+l.split('*')[0]+"*t"+n+")"+l.split(')')[1]+");")
    for n in names:
        print("t"+n+" "+n+";")
    print("void loadGLFuncs(){")
    for n in names:
        print("\t"+n+"=(t"+n+")wglGetProcAddress(\""+n+"\");")
    print("}")