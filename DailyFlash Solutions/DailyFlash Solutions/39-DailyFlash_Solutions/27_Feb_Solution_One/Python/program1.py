
l = int(input("Lower Bound :" ))
u = int(input("Upper Bound :" ))

for i in range(l, u + 1):
    n = i
    rev = 0
    while(n != 0):
        rev = rev * 10 + n % 10
        n = n // 10
    if(rev == i):
        print(rev, end = " ")

print()
