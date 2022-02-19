try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)
sum = 0
for i in range(1,n//2+1):
	if(n % i == 0):
		sum = sum + i
if(sum > n):
	print("Number is Abundant")	
else:
	print("Number is Not Abundant")

