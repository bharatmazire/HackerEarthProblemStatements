f = []
n = int(input())
for i in range(n):
    s = str(input())
    s = list(s)
    for j in s:
        f.append(j)
        
print (len(set(f)))
