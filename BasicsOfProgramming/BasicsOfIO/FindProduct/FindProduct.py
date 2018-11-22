rang = eval(input())
value = (input())
value = value.split()
if rang == len(value):
	answer = 1
	for i in value:
		i = eval(i)
		answer = (answer * i)%(10**9+7)
	print (answer)
