try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
for i in range(1,n+1):
	for j in range(1,n+1):
		if(j <= n - i):
			print(end = "\t")
		else:
			print(j,end = "\t")
	print()


