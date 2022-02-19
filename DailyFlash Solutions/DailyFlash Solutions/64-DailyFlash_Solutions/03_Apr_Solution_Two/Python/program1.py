
import math
def fact(k):
    f = 1
    for i in range(1, k+1):
        f *= i
    return f

n = int(input("Enter Number : "))
x = int(input("Enter x : "))
y = int(input("Enter y : "))
mul = 0
cnt = 1
while(cnt <= n):
    mul = mul + 1/(math.pow((x+y), cnt)*fact(cnt))
    cnt+=1
print(mul)
