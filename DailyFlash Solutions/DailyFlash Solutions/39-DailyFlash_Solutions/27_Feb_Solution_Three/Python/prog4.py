num = 65
for i in range(4):
    for j in range(4 - i):
        print(chr(num), end = " ")
        if(j < 3 - i):
            num += j + 1
    print()
