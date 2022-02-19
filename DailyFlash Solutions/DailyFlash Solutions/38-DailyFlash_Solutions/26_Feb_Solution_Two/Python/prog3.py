num = int(input("Enter num : "))
m = 9
while(num != 0):
    if(num % 10 <= m):
        m = num % 10;
    num = int(num / 10)
print("min : ", m)
