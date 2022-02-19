'''
Write a Program that prints Hexadecimal value of Each Digit from
entered Number.
'''
num=int(input("Enter the number:"))
temp=num

while(num > 0):
    rem=num % 10
    print("The hexadecimal of",rem,":",hex(rem))
    num=num//10

