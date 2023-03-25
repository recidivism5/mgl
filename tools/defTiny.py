import sys

with open(sys.argv[1],"r") as f:
    lines = f.read().split('\n')
    defs = []
    for l in lines:
        w = l.split()
        defs.append((w[1],int(w[2],16)))
def defSort(d):
    return d[1]
defs.sort(key=defSort)

with open(sys.argv[2],"w") as f:
    offset = 0
    f.write("enum{")
    last = 0
    for d in defs:
        if d[1] == last:
            f.write(d[0]+'='+str(last)+',')
        elif d[1] == (last+1):
            f.write(d[0]+',')
            last += 1
        else:
            f.write(d[0]+'='+str(d[1])+',')
            last = d[1]
        if f.tell()-offset >= 150:
            f.write('\n')
            offset = f.tell()
    f.write('};')