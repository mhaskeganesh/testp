col = int(input("Enter Columns : "))
row=col*2-1

n=64

for i in range(row):
	for j in range(col):
		if i+j>=row//2 and i-j<=row//2 :
			print(((i*i)*((j+1) * (j+1))),end="\t")
		else:
			print("",end="\t")
	print()
