row = int(input("Rows\t : "))

for x in range(row*2) :

	for y in range(row) :

		if x+y >= row-1 and x-y <= row-1 :
			print(" 1  ",end="")
		else :
			print("  ",end="")
	print()

