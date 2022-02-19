for i in range(7):
    if(i < 4):
        for j in range(4 +i):
            if(j < 3-i):
                print(" ", end = "")
            else:
                if(i%2 == 0):
                    if(j%2 == 1):
                        print("1", end = "")
                    else:
                        print(" ", end = "")
                else:
                    if(j%2 == 0):
                        print("1", end = "")
                    else:
                        print(" ", end = "")
    else:
        for j in range(10-i):
            if(j < i-3):
                print(" ", end = "")
            else:
                if(i%2 == 0):
                    if(j%2 == 1):
                        print("1", end = "")
                    else:
                        print(" ", end = "")
                else:
                    if(j%2 == 0):
                        print("1", end = "")
                    else:
                        print(" ", end = "")
    print()

