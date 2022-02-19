try:
	n = int(input("Enter Limit : "))
except ValueError as e:
	exit(0)
a = 0
b = 1
if(n<=0):
	exit(0)
elif(n == 1):
	print("0")
elif(n == 2):
	print("0 1")
else :
	c = a + b
	print("0 1", end = " ")
	for i in range(3, n+1):
		print(c, end =  " ")
		a = b
		b = c
		c = a + b
	print()
	

