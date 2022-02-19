k = 1
inc = 0
n = int(input("Enter Number : "))
k = 6
inc = -1
m = 0

for i in range(n,0,-1):
    k = k + inc
    l = k
    for j in range(1, n+i):
        if j > n - i:
                print(l, end = "\t")
                l = l +  m
        else:
            print(end = "\t")
    inc += 2
    m += 1
    print()
