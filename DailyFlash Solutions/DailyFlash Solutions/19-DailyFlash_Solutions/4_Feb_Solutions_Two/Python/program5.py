
try:
	n = int(input("Enter Number : "))
except ValueError as e:
	exit(0)

sum = 0
if(n < 0):
	exit(0)
for i in range(1, n//2 + 1):
	if(n % i == 0):
		sum = sum + i
	
print(sum)

