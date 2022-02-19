try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

k = 96
for i in range(1,n+1):
	for j in range(1,n-i+2):
		print(chr(k + j), end = "\t")
	k = k + 2
	print("\n")
