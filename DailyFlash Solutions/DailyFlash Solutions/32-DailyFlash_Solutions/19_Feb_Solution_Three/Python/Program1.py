'''
Problem Statement


	Program1 -- Write a Program that prints Binary of Each Digit from entered Number.
	
'''

num=input("Enter a Number\n:")

temp = num[::-1]
num = int(num)
temp = int(temp)

print("The Binary Values of Digits are")
while(temp > 0):

    print("Binary of ",(temp%10)," : ",bin(temp%10))
    temp = temp//10

