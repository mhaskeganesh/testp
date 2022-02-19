
num = input("Enter Number : ")
i = 0
flag = 1 
count = 0
while(i != len(num)):
	count = 0
	flag = 1
	for j in range(i-1, -1, -1):
		if(num[i] == num[j]):
			flag = 0	
	if(flag == 0):
		i+=1
		continue	
	j = i
	while(j != len(num)):
		if(num[j] == num[i]):
			count+=1
		j+=1
		
	print("Frequency of ",ord(num[i]) - 48, " : ",count)
	i+=1
	

