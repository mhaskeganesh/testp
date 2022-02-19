
m = 4
k = 1
n = int(input("Enter Number : "))
for i in range(0,n):
	k = 1
	m = n - i + 1
	for j in range(0,n):
		if(j < i):
			print(m, end = "\t")
			m+=1
		else:
			print(k, end="\t")
			k += 1
	print()
	

