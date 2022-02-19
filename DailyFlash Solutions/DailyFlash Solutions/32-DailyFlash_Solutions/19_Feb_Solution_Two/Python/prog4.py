c1 = 'E'
c2 = 'a'
for i in range(4):
    for j in range(4):
        if(j >= i):
            if(j % 2 == 0):
                print(c1, end = " ")
                c1 = chr(ord(c1) - 1)
            else:
                print(c2, end = " ");
                c2 = chr(ord(c2) + 1)
        else:
            print(end = "  ")

    print()

