with open("glad.h","r") as f:
    with open("mgl2.h","w") as o:
        with open("gl.h","r") as g:
            gl = g.read().split('\n')
            legacy = {}
            for l in gl:
                if "gl" in l:
                    legacy[l[l.find("gl"):l.find("(")-1]]=l
            lines = f.read().split('\n')
            i = 0
            while i < len(lines):
                if "GL_VERSION_" not in lines[i] and ("#endif" not in lines[i]):
                    if "(APIENTRYP " in lines[i]:
                        func = lines[i+1].split(' ')[2][5:-1]
                        if func not in legacy:
                            o.write(lines[i].split(' ')[1]+" (*"+func+')'+lines[i].split(')')[1]+");\n")
                        else:
                            o.write(legacy[func]+'\n')
                        i+=2
                    else:
                        o.write(lines[i]+'\n')
                i+=1