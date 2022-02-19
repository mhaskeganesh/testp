for i in range(4):
    for j in range(4):
        if(j < 3 - i):
            print(" ", end = " ")
        else:
            print(chr(65 + j),end = " ");
    print()
