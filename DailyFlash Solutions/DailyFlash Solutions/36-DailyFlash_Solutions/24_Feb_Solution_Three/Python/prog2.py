num = int(input("Enter num : "))
sqrt = int(num / 2)
temp = 0
while(sqrt != temp):
    temp = sqrt
    sqrt = int((int(num / temp) + temp) / 2)
print("sqrt of", num, "is", sqrt)
