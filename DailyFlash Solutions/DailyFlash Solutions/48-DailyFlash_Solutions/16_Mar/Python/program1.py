
n = int(input("Enter Number "))

def isPrime(n:int) -> int:

	for i in range(2,n//2 + 1):
		if(n%i == 0):
			return 0
	return 1

print("Prima Factors are : ")
for i in range(2,n//2 + 1):
	if(n%i == 0):
		if(isPrime(i)):
			print(i)	

