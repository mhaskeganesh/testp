for i in range(4):
    cnt = 0
    for j in range(4):
        if(j < 3 - i):
            print(" ", end = " ")
        else:
            if(cnt == 0):
                print("=", end = " ")
            else:
                print(cnt, end = " ")
            cnt += 1
    print()
