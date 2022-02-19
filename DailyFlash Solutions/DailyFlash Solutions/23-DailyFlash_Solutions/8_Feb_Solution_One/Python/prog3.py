s = 0
i = 1
for j in range(1, 101):
    s = 0
    i = 1
    while(i * i <= j):
        if(j % i == 0):
            s += i
        if(int(j / i) != i and j % int(j / i) == 0):
                if(i == 1):
                    i += 1
                    continue
                s += int(j / i)
        i += 1
    if(s == j and j != 1):
        continue
    print(j, end = " ")

