
for i in range(7):
    if(i < 4):
        for j in range(i + 1):
            print("*", end = "")
    else:
        for j in range(7 - i):
            print("*", end = "")
    print()
