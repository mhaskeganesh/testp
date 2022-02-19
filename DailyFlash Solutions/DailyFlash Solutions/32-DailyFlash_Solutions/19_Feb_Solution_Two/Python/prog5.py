num = int(input("num : "))
temp = num
while(num != 0):
    print(temp, "/", num % 10, " = ", temp/(num % 10))
    num = int(num / 10)
