'''
Write a Program that takes a number as input from user and prints
only perfect digits if it have any else prints appropriate message.
'''
num=int(input("Enter the number:"))
temp=num
Sum=0
cnt=0
while(num > 0):

    Sum = 0
    rem=num % 10
    
    for x in range(1,rem):
        if(rem % x == 0):
            Sum+=x
    if(rem != 0 and Sum == rem):
        cnt+=1
        print("Perfect Digits : ",rem)

    num=num//10

if(cnt==0):
    print("The number",temp,"does not have any digit, which is perfect in nature.")
        

            
       
        
            
