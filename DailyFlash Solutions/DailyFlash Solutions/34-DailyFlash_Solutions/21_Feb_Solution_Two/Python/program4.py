n = 4
a = "CORE"
for i in range(0,n):
	for j in range(0,n):
		if(j < i):
			print("\t", end = "")
		else:
			print(a[j], end="\t")
	print()
	

