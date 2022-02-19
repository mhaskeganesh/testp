try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

k = 1
for i in range(1,n+1):
	for j in range(1,n+1):
		if(j <= n-i):
			print(end = "\t")
		else:
			print(chr(k + 64), end = "\t")
			k+=1;
	k = 1
	print()
