lb = int(input("lb : "))
ub = int(input("ub : "))
s = 0

for i in range(lb, ub + 1):
    num = i
    s = 0
    while(num != 0):
        s += num % 10
        num = int(num / 10)
    if(i % s == 0):
        print(i, end = " ")
