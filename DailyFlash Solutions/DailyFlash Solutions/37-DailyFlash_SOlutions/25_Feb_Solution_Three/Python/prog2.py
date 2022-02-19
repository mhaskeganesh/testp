num1 = int(input("Enter num1 : "))
num2 = int(input("Enter num2 : "))
for i in range(num1, num2 + 1):
    sqrt = i / 2
    temp = 0
    while(sqrt != temp):
        temp = sqrt
        sqrt = (((i / temp) + temp) / 2)
    print(sqrt, end = " ")
