num = int(input("num : "))
k = 0
temp = num
while(num != 0):
    rem = num % 10
    s = 0
    for i in range(1, int(rem / 2) + 1):
        if(rem % i == 0):
            s += i
    if(s == rem):
        print(s, end = " ")
        k += 1
    num = int(num / 10)
if(k == 0):
    print("The number", temp, "does not have any digit, which is perfect in nature.")
