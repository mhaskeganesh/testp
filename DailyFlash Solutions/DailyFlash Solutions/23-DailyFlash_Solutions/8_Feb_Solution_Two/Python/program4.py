try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

for i in range(1,n+1):
	for j in range(1,n+1):
		if(j <= (n-i)):
			print(end = "\t")
		elif j == n-i+1:
			print("=\t",end="")
		else:
			print(k, end = "\t")
			k+=1
	k = 1
	print()
