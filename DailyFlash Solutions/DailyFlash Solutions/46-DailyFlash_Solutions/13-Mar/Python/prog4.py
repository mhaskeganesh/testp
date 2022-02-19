for i in range(4):
    for j in range(7):
        if(j < 4):
            if(j >= 3 - i):
                if(j == 3):
                    print("#", end = "")
                else:
                    print("*", end = "")
            else:
                print("", end = " ")
        else:
            if(j <= 3 + i):
                print("*", end = "")
    print()
