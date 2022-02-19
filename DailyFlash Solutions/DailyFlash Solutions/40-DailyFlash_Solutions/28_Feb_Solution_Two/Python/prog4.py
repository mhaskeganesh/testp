for i in range(4):
    for j in range(4 - i):
        print(i + j,end = "")
        print(chr(65+ j), end = " ")
    print()
