import math
n = int(input())
x = int(input())
y = int(input())
m = 0
for i in range(1, n + 1):
    if(i % 2 == 1):
        m += (i)/pow(x + y, x)
    else:
        m += (i)/pow(x + y, y)
print(m)
