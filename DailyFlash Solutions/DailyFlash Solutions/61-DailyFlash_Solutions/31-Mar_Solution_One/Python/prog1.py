import math
n = int(input())
def fact(n):
    if(n == 1):
        return 1
    return n * fact(n - 1)
m = 0
for i in range(1, n + 1):
        m += i / fact(i)
print(m)
