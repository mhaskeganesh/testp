'''
Problem Statement

Program4 -- Write a Program that takes a number as input from user and prints only those digits from that number, which are perfect divisors of the actual number
'''

num = input("Enter a Number\n:")

temp = num[::-1]
num = int(num)
temp = int(temp)

print("The Perfect Digits are")
while(temp > 0):

    digit = temp%10
    
    if (num % digit) == 0 :
        print(digit,end =" ")
    temp = temp//10
print()

