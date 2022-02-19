rows = int(input("rows : "))
n = 0
for i in range(rows):
    for j in range(4):
        if(n == 0):
            print("white-black", end = " ")
            n = 1
        elif(n == 1):
            print("black-white", end = " ")
            n = 0
    print()
