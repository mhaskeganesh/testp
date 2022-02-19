'''

Program2 -- Write a Program that accepts a number from user and prints second Maximum digit from that number.
'''

num=int(input("Enter the number\t: "))

temp = num
maxd = 0
max2 = 0

while temp > 0 :

    digit = temp%10
    if digit > maxd:
        max2 = maxd
        maxd = digit
    elif digit > max2:
        max2 = digit
    temp =  temp //10

print("Second Maximum Digit in Number ",num," is ",max2)
