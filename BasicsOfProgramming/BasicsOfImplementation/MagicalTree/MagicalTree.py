maximum = 0
n = int(input())

for x in range(n):
    s = str(input())
    a = s.split('+')
    #print (a)
    count = -1
    for i in a:
        count = count + 1
        if(len(i) > 1):
            x = 0
            ss = 0
            s = i.split('-')
            #print (s)
            for j in s:
                if(x == 0):
                    ss = int(j)
                    x = 1
                else:
                    ss = ss - int(j)
            a[count] = ss
            
        else:
            a[count] = int(i)
        
    if (sum(a) > maximum):
        maximum = sum(a)
print(maximum)
