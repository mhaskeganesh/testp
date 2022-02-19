

num = input("Enter the number : ")

temp = num
while num!=0:
    rem = num%10

    if temp%rem==0:
        print(rem)
    num= num/10    
