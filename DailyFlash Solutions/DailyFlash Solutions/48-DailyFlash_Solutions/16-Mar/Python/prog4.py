for i in range(4):
    for j in range(7 - i):
        if(j < i):
            print("", end = " ")
        else:
            if(i == 3):
                print(j + 2, end = "")
                continue
            print(j + 1, end = "")
    print()
