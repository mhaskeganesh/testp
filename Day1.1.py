#14 feb 2022
#--------------------------------------------------------------
#Program 1: Write a Program to Find Maximum between two numbers
#Input: 1 2
#Output: 2 is Max number among 1 & 2

a = int(input("Enter first number"))
b = int(input("Enter second number"))

if a > b:
 print(a,"is Max number among ",a," & ",b)
elif b > a:
  print(b,"is Max number among ",a," & ",b)
else:
 print("You have entered same numbers")