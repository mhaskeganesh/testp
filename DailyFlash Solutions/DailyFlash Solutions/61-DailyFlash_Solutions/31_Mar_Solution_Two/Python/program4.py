n = int(input("Enter Number : "))

k = 0
for i in range(1, n*2):
    k = 0
    for j in range(n, 0,-1):
        if j <= i and i <= n:
                print((i-1),k, end = "\t")
        elif i > n and j <= n - (i-n):
            print((i-1),k,end = "\t")
        else:
            print(end="\t")
    print()
