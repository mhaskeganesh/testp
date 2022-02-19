from math import *

n = int(input("Enter the limit : "))

s=0.0

for i in range(1,n+1):
        s+=1/factorial(i)


print("Result of series is :",round(s,2))
