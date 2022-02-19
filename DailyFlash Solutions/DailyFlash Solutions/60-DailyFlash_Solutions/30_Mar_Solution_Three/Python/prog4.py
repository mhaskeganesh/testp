for i in range(5):
    for j in range(3):
        if(i < 3):
            if(j < 2 - i):
                print("", end = " ")
            else:
                print("0", end = "")
        else:
            if(j < i - 2):
                print("", end = " ")
            else:
                print("0", end = "")
    print()
