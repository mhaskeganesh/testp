try:
	n = int(input("Enter ft : "))
except ValueError as e:
	exit(0)
if(n < 0):
	exit(0)
print("Equivalent distance for {}ft in cm is {}cm".format(n, n * 30))
