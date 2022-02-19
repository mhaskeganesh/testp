'''
Problem Statement

Program4 -- Write a Program that takes a number as input from user and prints Quotient of division of each digit from that number with the number itself.

'''

num = input("Enter a Number\n:")

temp = num[::-1]
num = int(num)
temp = int(temp)


while(temp > 0):

	print("The Quotient of Division ",num,"/",(temp%10)," = ",(num//(temp%10)))
	temp = temp//10

