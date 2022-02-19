for i in range(4):
    for j in range(4):
        if(j >= i):
            b = ""
            num = i + j
            k = 0
            if(num == 0):
                print("0", end = "")
            while(num != 0):
                if(k == 0):
                    b = chr(num % 2 + 48) + b
                    k += 1
                else:
                    b = chr(num % 2 + 48) + b
                num = int(num / 2)
            print(b, end = "\t")
        else:
            print(end = "\t")
    print()
