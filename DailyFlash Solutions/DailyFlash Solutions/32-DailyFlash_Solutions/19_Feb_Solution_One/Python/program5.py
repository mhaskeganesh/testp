
i = 0
n = int(input("Enter Number: "))
temp = n
while(n!=0) :
    print(temp,"/",n%10,"=",temp//(n%10))
    n = n//10
