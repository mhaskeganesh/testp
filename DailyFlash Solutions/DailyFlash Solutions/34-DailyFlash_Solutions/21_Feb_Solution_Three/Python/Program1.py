'''
Write a Program that prints octal value of Each Digit from entered
Number.
'''
num=input("Enter the number\t: ")[::-1]
num = int(num)
while(num > 0):
    rem=num % 10
    print("The octal value of",rem,":",str(oct(rem))[2:])
    num=num//10

