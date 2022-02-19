l = []
i = 0
while(i < 5):
    num = int(input())
    l.append(num)
    if(i > 0):
        if(l[i - 1] > l[i]):
            break
    i += 1
