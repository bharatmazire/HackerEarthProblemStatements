def fact(n):
    if(n > 1):
        return(n * fact(n - 1))
    else:
        return 1

def rotate(n,z):
    nn = str(n)+str(n)
    s = len(str(n)) - z
    p = nn[s-1:s-1+len(str(n))]
    return (int(p))
    
def degitSum(n):
    while(n > 9):
        s = 0
        for i in str(n):
            s += int(i)
        n = s
    return n
    
inp = input()
inp = list(inp)
n = int(inp[0])
z = int(inp[2])



f = fact(n)
r = rotate(f,z)
dn = degitSum(r)

print (dn+int(len(str(f))))
