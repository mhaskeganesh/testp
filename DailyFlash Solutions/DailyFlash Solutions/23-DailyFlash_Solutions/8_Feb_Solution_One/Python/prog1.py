num = int(input("Enter num : "))
s = 0
i = 1
while(i * i <= num):
    if(num % i == 0):
        s += i
    if(int(num / i) != i and num % int(num / i) == 0):
            if(i == 1):
                i += 1
                continue
            s += int(num / i)
    i += 1
print("sum = ", s)
if(s > num):
    print("Abundant num")
else: 
    print("Not Abundant num.")
