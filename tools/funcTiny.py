import sys

with open(sys.argv[1],"r") as f:
    lines = f.read().split('\n')
    out = ""
    for l in lines:
        if len(out+l) > 150:
            print(out)
            out = l
        else:
            out += l
    print(out)