with open("mgl2.h","r") as i:
    with open("mgl2Macro.h","w") as o:
        for l in i.read().split('\n'):
            if "*gl" in l:
                o.write("G("+l[l.find("*gl")+1:l.find(")")]+')\n')