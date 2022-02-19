n = int(input("num : "))
s = 0

for i in range(1, n + 1):
    num = i
    s = 0
    while(num != 0):
        s += num % 10
        num = int(num / 10)
    if(i % s == 0):
        print(i, end = " ")
