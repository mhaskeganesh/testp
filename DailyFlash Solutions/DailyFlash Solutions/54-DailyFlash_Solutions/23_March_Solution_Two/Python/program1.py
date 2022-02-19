import math
n = int(input("Enter Number : "))
mul = 1
for i in range(1,n+1):
	mul = mul+i/(math.sqrt(i*(i+1)))
print(mul)

