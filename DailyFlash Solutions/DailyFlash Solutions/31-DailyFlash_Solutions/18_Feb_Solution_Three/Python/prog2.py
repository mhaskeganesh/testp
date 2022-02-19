num = int(input("Enter num : "))
i = 0
s = 0
while(num != 0):
    s += num % 10
    num = int(num / 10)
    i += 1

print("Sum : " , s, "\nAvg : ", s/i)
