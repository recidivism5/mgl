with open("mgl.h","r") as i:
    with open("mglMacro.h","w") as o:
        for l in i.read().split('\n'):
            if "*gl" in l:
                o.write("G("+l[l.find("*gl")+1:l.find(")")]+')\n')