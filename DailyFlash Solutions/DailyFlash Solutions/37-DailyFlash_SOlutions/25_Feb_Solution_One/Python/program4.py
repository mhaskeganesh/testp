num = 1
for i in range(4):
    for j in range(4):
        print(num, end = " ")
        if(j < 3):
            num = num % 4 + 1
    print()
