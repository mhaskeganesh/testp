
num = 6
for x in range(4) :

	num = num + (x*2) - 1
	n = num
	for y in range(7-x):

		if y < x :
			
			print(" \t",end=" ")
		else :
			print(n,"\t",end=" ")
			n+=x

	print()
