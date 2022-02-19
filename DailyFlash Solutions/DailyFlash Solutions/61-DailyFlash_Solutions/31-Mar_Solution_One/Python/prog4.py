for i in range(5):
    for j in range(3):
        if(i < 3):
            if(j < 2 - i):
                print("", end = "\t")
            else:
                print(10 * i + j, end = "\t")
        else:
            if(j < i - 2):
                print("", end = "\t")
            else:
                print(10 * i + j, end = "\t")
    print()
