
n = int(input("Enter Number :"))
if(n < 0):
        exit(0)
max1 = n%10
max2 = max1
flag = 0
k = 0
while(n != 0):
        if(max1 <= n % 10):
                max2 = max1
                max1 = n % 10
                k+=1
        
        elif((max2 < n % 10) or (flag == 0 and k != 2)) :
                max2 = n % 10
                flag = -1
                k = 0
        
        n = n //10

if(max2 != max1):
        print("Second Max Digit : ", max2)
else:
        print("Only one Digit or all are same digit")


