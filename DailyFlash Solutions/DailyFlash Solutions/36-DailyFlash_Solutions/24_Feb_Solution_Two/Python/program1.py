
sum = 0	
for i in range(1,101):
	temp = i
	sum = 0
	while(temp != 0):
		sum += temp%10
		temp = temp // 10
	if(i % sum == 0):
		print(i,end= " ")	
print()
	

