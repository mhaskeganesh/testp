'''
Write a Program that accepts a number from user and prints
second Minimum digit from that number.
'''
num=int(input("Enter the number:"))
temp=num
x=y=9
while(num != 0):
    digit=num % 10
    if(digit<x):
        y=x
        x=digit
    else:
        if(digit < y):
            y=digit;
    num=num//10

print("Second minimum digit of the number",temp,"is",y)

