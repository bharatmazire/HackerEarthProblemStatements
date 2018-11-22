l = eval(input())
r = eval(input())
for i in range(0,r):
	st = input()
	st = st.split()
	if eval(st[0])<l or eval(st[1])<l:
		print("UPLOAD ANOTHER")
	elif eval(st[0]) == eval(st[1]):
		print("ACCEPTED")
	elif (eval(st[0])>l and eval(st[1])>l) or (eval(st[0])==l and eval(st[1])>l) or (eval(st[0])>l and eval(st[1])==l):
		print("CROP IT")
	else:
		print("ACCEPTED")
    
