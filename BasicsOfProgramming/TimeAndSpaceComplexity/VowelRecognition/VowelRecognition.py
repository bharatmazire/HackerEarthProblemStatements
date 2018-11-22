n = int(input())
for i in range(n):
    count = 0
#    substr = []
    string = str(input())
    for j in range(len(string)):
        for k in range(j,len(string)+1):
            if(string[j:k] != ""):
                #substr.append(string[j:k])
                for l in string[j:k]:
                    if(l in "aeiouAEIOU"):
                        count = count + 1
    print (count)                
#    for i in substr:
#        for j in i:
#            if(j in "aeiouAEIOU"):
#                count = count + 1
#    print (count)
