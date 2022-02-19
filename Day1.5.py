#Program 5: Write a Program to check whether the number is divisible by 5 & 11 or not.
#Input: 55
#Output: 55 is divisible by 5 & 11.

num = int(input())
if num % 11 == 0 and num % 5 ==0:
    print(num," is divisible by 5 & 11.")
else:
    print(num," is not divisible by 5 & 11 together")