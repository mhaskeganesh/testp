import math
def isPrime(num):
    cnt = 0
    if(num == 2):
        return True
    if(num <= 1):
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if(num % i == 0):
            return False
    return True

while(True):
    num = int(input())
    if(isPrime(num)):
        print(num)
    if(num < 0):
        break
    
