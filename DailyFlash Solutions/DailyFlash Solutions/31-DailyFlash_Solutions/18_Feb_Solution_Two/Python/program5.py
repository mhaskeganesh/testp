sum = 0
print("Enter Number :")
n = int(input())
while(n!=0) :
	if(n % (n%10) == 0):
		print(n%10 , end=" ")
	n = n//10
print()
