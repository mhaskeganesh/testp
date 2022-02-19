
print("Enter Number :")
n = int(input())
a = 'E'
b = 'a'
for i in range(0,n*2,2):
	k = i
	for j in range(0,n*2,2):
		if(j < i):
			print("\t", end = "")
		else:
			print("*", end="\t")
	print()
	

