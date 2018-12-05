n = int(input())

s = str(input())

l = []
s = s.split(" ")

for i in s:
    l.append(int(i))
    
mn = min(l)
mx = max(l)

for i in range(mn,mx+1):
    if(i not in l):
        print ("NO")
        exit(0)
print ("YES")
