try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

if(n < 0):
	exit(0)
flag = 0
for j in range(1,n+1):
	flag = 0
	for i in range(2, j//2 + 1):	
		if(j % i == 0 ):
			flag = 1
			break
	if(flag == 0):
		print(j, end =" ")
print()
	

