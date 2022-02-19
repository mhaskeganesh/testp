
lower = int(input("Enter Lower : "))
upper = int(input("Enter Upper : "))
sum = 0	
for i in range(lower,upper + 1):
	temp = i
	sum = 0
	while(temp != 0):
		sum += temp%10
		temp = temp // 10
	if(i % sum == 0):
		print(i,end= " ")	
print()
	

