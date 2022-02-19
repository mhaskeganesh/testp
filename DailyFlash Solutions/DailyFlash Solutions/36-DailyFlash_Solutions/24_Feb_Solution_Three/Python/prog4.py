for i in range(5):
    n = i * i
    for j in range(5):
        if(j >= i):
            print(n, end = "\t")
            n += i
        else:
            print(end = "\t")
    print()
