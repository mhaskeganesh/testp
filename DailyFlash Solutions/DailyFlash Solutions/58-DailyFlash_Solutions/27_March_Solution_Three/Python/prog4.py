num = 1
for i in range(7):
    if(i < 4):
        for j in range(i + 1):
            if(j == 0):
                print("H", end = "")
            if(j == 1):
                print("O", end = "")
            if(j == 2):
                print("M", end = "")
            if(j == 3):
                print("E", end = "")
    else:
        for j in range(7 - i):
        
            if(j == 0):
                print("H", end = "")
            if(j == 1):
                print("O", end = "")
            if(j == 2):
                print("M", end = "")
            if(j == 3):
                print("E", end = "")
    print()
