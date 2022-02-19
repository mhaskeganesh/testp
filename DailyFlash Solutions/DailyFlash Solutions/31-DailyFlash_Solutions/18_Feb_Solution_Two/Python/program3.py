
print("Enter Radius :")
n = int(input())
if(n<0):
	print("Radius cannot be negative")
	exit(0)
print("Circumference : {}cm".format(round(2*3.142*n),2))
