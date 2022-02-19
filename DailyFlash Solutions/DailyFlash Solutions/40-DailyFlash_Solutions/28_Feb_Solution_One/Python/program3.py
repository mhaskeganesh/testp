
n = int(input("Enter Number :"))
if(n < 0):
        exit(0)
min1 = 10
min2 = 10
while(n != 0):
        if(min1 > n % 10):
                min2 = min1
                min1 = n % 10
        elif(min2 > n % 10 and n%10 != min1) :
                min2 = n % 10
        n = n //10

if(min2 != 10):
        print("Second Min Digit : ", min2)
else:
        print("Only one Digit or all are same digit")


