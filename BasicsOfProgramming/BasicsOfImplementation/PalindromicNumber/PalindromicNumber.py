for i in range(int(input())):
    l = input()
    l = l.split(" ")
    h = int(l[1])
    l = int(l[0]) + 1
    c =0
    for j in range(l,h):
        if(str(j)==str(j)[::-1]):
            c += 1
    print (c)
