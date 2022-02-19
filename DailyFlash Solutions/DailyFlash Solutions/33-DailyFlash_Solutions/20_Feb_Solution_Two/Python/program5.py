
n = int(input("Enter Number : "))
flag = 0
sum = 0
while(n != 0):
	sum = 0
	for i in range(1, n%10):
		if((n%10)%i == 0):
			sum = sum + i
	if(sum == n%10):
		flag = 1
		print(n%10, end = " ")
	n = n // 10
if(flag == 0):
		print("Does not contain any perfect digit")
else:
		print()
