num = int(input("Enter num : "))
if(not(num >= 200 and num <= 600)):
    exit()
sqrt = num / 2
temp = 0
while(temp != sqrt):
    temp = sqrt
    sqrt = (num / temp + temp) / 2
print(sqrt)
