def fact(k):
    f = 1
    for i in range(1, k+1):
        f *= i
    return f

n = int(input("Enter Number : "))
mul = 0
cnt = 1
while(cnt <= n):
    mul = mul + cnt/fact(cnt)
    cnt+=1
print(mul)
