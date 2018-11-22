st = input()
st = st.split()
l = eval(st[0])
r = eval(st[1])
k = eval(st[2])
count = 0
while l<= r:
	if l%k == 0:
		count+=1
		l += k
	else:
		l += 1
print(count)
