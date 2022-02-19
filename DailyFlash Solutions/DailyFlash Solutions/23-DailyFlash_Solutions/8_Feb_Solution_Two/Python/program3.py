
sum = 0
for j in range(1,101):
	sum = 0
	for i in range(1,j//2+1):
		if(j % i == 0):
			sum = sum + i			
		
	if(sum == j):
		continue
	else:
		print(j, end = " ")
	
print()

