for i in range(4):
    inc = 0
    for j in range(4):
        if(j < 3 - i):
            print(" ", end = " ")
        else:
            print(chr(65 + inc),end = " ");
            inc += 1
    print()
