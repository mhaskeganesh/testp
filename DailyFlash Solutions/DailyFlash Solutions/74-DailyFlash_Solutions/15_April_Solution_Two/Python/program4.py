
n = int(input("Enter Limit : "))
flag = 1

for i in range(1, 2*n):
    flag = 1
    for j in range(1, 2*n):
        if(i<=n and j >(n-i) and j <(n+i)):
            if(flag == 1):
                print(1,end = "\t")
                flag = 0
            else:
                print(end = "\t")
                flag = 1
        elif(i>n and j > (i-n) and j < (2*n - (i-n))):
            if(flag == 1):
                print(1,end = "\t")
                flag = 0
            else:
                print(end = "\t")
                flag = 1
        else:
            print(end = "\t")
    print()


