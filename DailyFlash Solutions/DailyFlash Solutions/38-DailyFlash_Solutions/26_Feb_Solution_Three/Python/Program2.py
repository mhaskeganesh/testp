'''

Program2 -- Write a Program that accepts a number from user and prints min digit from that number.
'''

num=int(input("Enter the number\t: "))

temp = num
mind = temp%10

while temp > 0 :

    digit = temp%10
    if digit < mind:
        mind = digit
    temp =  temp //10

print("Minimum Digit in Number ",num," is ",mind)
