num = int(input("Enter num : "))
temp = num
n = int(input("Enter n : "))
temp = num
cnt = 0
while(temp != 0):
    cnt += 1
    if(temp % 10 == 1):
        num = num + (n - 1) * pow(10, cnt - 1)
    temp = int(temp / 10)
print(num)
