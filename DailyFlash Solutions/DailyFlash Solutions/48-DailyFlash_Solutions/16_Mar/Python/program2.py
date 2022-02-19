n = int(input("Enter Number "))
max = int(input("Enter Digit to replace 1 :  "))
rev = 0
while(n != 0):
	if(n%10 == 1):
		rev = rev * 10 + max
	else:
		rev = rev * 10 + n  % 10
	n //= 10
	
while(rev != 0):
	n = n * 10 + rev % 10
	rev //= 10
print(n)

