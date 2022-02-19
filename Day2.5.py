#Program 5: Write a Program to Find Maximum between three numbers
#Input: 1 4 2
#Output: 4 is Max number among 1, 4 & 2

num1 = int(input())
num2 = int(input())
num3 = int(input())

if num1 > num2:
    if num1 > num3:
        print(num1," is max number among ",num1,",",num2,",",num3)
    elif num3 > num1:
        print(num3," is max number among ",num1,",",num2,",",num3)
    else:
        print(num1," is max number among ",num1,",",num2,",",num3)
elif num2 > num1:
    if num2 > num3:
        print("")
    