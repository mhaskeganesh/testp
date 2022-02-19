num = int(input("num : "))
b = ""
while(num != 0):
    b = chr(num % 2 + 48) + b
    num = int(num / 2)
print("Bin : ", b)
