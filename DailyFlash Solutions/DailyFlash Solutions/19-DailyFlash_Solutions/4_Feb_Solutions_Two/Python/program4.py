
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
if(n < 0):
	exit(0)

k = 1
for i in range(1, n+1):
	for j in range(0,(n-i)*2 + 1, 2):
			print(k * 7, end = "\t")
			k+=1
	print()
