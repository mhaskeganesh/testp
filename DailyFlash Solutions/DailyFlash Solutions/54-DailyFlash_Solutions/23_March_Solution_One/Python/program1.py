import math

num = input("Enter the  number :  ")

sum1 = 0

while(num!=0):
    sum1 = sum1 +num/math.sqrt(num*num+1)
    num = num-1

print("Sum of series : "+str(sum1))    

