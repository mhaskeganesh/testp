import math
def isPrime(num):
    if(num <= 1):
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if(num % i == 0):
            return False
    return True
num = int(input("Enter num : "))
for i in range(2,int(math.sqrt(num)) + 1):
    if(num % i == 0):
        if(isPrime(i)):
            print(i)
        if(isPrime(int(num / i)) and i != num / i):
            print(num / i)
