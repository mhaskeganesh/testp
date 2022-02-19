n = int(input("Enter Number : "))

k = 0
for i in range(1, n*2):
    for j in range(n, 0,-1):
        if j <= i and i <= n:
            print((k+i-1)*(k+i-1), end = "\t")
            k+=1
        elif i > n and j <= n - (i-n):
            print((k+i-1)*(k+i-1), end = "\t")
            k+=1
        else:
            print(end="\t")
    print()
