stri = input()
strii=""
for i in range(0,len(stri)):
	if stri[i].islower():
		strii+=stri[i].upper()
	else:
		strii+=stri[i].lower()
print (strii)

