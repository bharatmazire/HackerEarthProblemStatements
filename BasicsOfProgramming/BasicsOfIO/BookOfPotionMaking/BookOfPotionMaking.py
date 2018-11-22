number = input()

count = 1
sum = 0

for i in number:
    sum = sum + (int(i) * count)
    count = count + 1

if(sum % 11 == 0):
    print ("Legal ISBN")
else:
    print ("Illegal ISBN")
    
