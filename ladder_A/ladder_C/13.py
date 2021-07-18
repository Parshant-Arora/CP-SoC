
n = input()
l = []
for i in range(int(n)):
	temp = input()
	l.append(temp)
	if l.count(temp)==1:
		print("OK")
	else:
		print(str(temp)+str(l.count(temp)-1))

