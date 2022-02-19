
try:
	n = int(raw_input("Enter Natural Number : "))
except ValueError as e:
	print("Not a Number")
	exit(0)
	pass

if(n<=0):
	exit(0)
print("Sum : {}".format(n*(n + 1)/2));
