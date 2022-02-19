
def isPrime(n):
    for i in range(2,  n//2 + 1):
        if(n%i == 0):
            return False
    return True

n = int(input("Enter Number : "))
v = list()

for i in range(2,n) :
    if(isPrime(i)):
        v.append(i)

for i in range(0, len(v)-1):
    for j in range(i+1, len(v)):
        if(v[i] + v[j] == n):
            print(v[i] , " + ", v[j], " = ", n)
    
