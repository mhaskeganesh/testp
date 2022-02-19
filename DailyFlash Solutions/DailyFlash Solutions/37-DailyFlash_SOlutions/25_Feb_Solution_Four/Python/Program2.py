'''

Program2 -- Write a Program that accepts a number from user and prints max digit from that number.
'''

num=int(input("Enter the number\t: "))

temp = num
maxd = temp%10

while temp > 0 :

    digit = temp%10
    if digit > maxd:
        maxd = digit
    temp =  temp //10

print("Maximum Digit in Number ",num," is ",maxd)
