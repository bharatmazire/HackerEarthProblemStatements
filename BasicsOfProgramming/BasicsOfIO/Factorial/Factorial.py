no = eval(input())
def fact(no):
	if no>=2:
		return no*fact(no-1)
	else:
		return 1

print(fact(no))
