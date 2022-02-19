
n = int(input("Enter Number : "))
for i in range(0,n):
    for j in range(1, n*2):
        if(j >= (n*2)/2 - i and j <= (n*2)/2 + i):
            print(end = "*\t")
        else:
            print(end = "\t")
    print()
