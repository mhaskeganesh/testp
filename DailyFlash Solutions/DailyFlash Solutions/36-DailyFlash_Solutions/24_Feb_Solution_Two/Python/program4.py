n = int(input("Enter Number : "))
for i in range(0,n):
	for j in range(0,n):
		if(j < i):
			print("\t", end = "")
		else:
			print(i*j, end="\t")
	print()
	

