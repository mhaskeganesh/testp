l = input("Enter String : ")
k = 0
n = len(l)
for i in range(1, n*2):
    k = 0
    for j in range(1, n+1):
        if j <= i and i <= n:
                print(l[k], end = "\t")
                k += 1
        elif i > n and j > i - n:
            print(l[k] ,end = "\t")
            k += 1
    print()
