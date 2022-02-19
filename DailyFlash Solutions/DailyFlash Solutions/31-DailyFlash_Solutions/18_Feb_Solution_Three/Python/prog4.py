n = int(input("N : "))

for i in range(n):
    for j in range(n):
        if(j >= i):
            print((j * j + (i * j)), end = "\t")
        else:
            print("", end = "\t")
    print()

