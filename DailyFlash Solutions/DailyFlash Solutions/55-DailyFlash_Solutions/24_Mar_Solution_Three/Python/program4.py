
n = int(input("Enter Number : "))
for i in range(1, n*2):
    for j in range(1, n+1):
        if j <= i and i <= n:
                print("*", end = "\t")
        elif i > n and j > i - n:
            print("*" ,end = "\t")
    print()
