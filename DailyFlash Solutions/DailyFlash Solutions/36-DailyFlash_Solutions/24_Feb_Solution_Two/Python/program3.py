n = int(input("Enter Number : "))
for i in range(0,n):
	for j in range(0,n):
		if(j % 2 == 0):
			print("white-black\t", end = "")
		else:
			print("black-white", end="\t")
	print()
	

