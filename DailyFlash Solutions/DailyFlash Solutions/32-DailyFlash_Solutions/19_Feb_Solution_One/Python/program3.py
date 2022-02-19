
print("Enter Circumference :")
n = float(input())
if(n<0):
	print("Circumference cannot be negative")
	exit(0)
print("Radius : {}cm".format(round(n / (2*3.142)),2))
