cnt = 0
k = 0
for i in range(4):
    k = 0
    for j in  range(4 - i):
        print(chr(97 + cnt + k), end = " ")
        k += 1
    print()
    cnt += 2
