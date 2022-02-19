num = int(input("num"))
s = 0
i = 1
while(i * i <= num):
    if(num % i == 0):
        if(num / i == i):
            print(i, end = "  ")
            s += i
        else:
            print(i, " ", int(num / i), end = "  ")
            s += i
            s += int(num / i)
    i += 1

print("\nsum : ", s)
