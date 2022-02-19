temp = 5
for i in range(4):
    if(i > 0):
        temp += 2 * i - 1
    num = temp
    for j in range(7 - i):
        if(j < i):
            print("", end = "\t")
        else:
            print(num, end = "\t")
        
            num += i
    print()
