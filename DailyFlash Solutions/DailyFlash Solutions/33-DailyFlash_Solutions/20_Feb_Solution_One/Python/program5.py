num = input("Enter the number : "  )

flag = 0
temp = num

while num!=0:
    rem = num%10
    sum1=0

    for itr in range(1,(rem/2)+1):
        if rem%itr == 0:
            sum1 = sum1 +itr
        if sum1==rem:
            flag = 1
            print(rem)
        
    num = num/10
if(flag ==0):
    print("does not have perfect number : ")
        
