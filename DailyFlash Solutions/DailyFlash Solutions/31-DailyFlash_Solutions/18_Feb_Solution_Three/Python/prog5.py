num = int(input("Enter num : "))
temp = num
print("Divisors : ", end = "")
while(num != 0):
    if(temp % (num % 10) == 0):
        print(num % 10, end = " ")
    num = int(num / 10)
