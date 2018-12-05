k = str(input())
k = k.split(" ")

x = int(k[1])
k = str(k[0])

k = list(k)
i = 0
while (x != 0):
    if(k[i] == '9'):
        i = i + 1
    else:
        k[i] = '9'
        x = x - 1
        
k = ''.join(k)

print (k)
