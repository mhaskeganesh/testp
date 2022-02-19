from math import *

n = int(input("Enter the limit : "))
x,y = [ int(x) for x in input("Enter x and y : ").split()]

s=0.0

for i in range(1,n+1):
        s+=i*(x+y)/factorial(i)


print("Result of series is :",round(s,2))
