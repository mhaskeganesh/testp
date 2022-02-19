sum = 0
k = 0
print("Enter Number :")
n = int(input())
while(n!=0) :
	sum = sum + (n%10)
	k+=1
	n = n//10
	
print("Average : ", sum/k)
print("Sum : ", sum)

