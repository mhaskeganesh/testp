num = int(input("Enter num : "))

cnt = 0
temp = num
while(temp != 0):
    if(temp % 10 == 1):
        cnt += 1
        num += pow(10, cnt - 1)
    temp = int(temp / 10)
print(num)


