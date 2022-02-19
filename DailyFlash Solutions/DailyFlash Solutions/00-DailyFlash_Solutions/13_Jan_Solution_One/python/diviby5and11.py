"""

Program 5: Write a Program to check whether the number is divisible by 5 &
11 or not.
Input: 55
Output: 55 is divisible by 5 & 11.

"""


a=55

if a%5==0 and a%11==0:
    print(str(a)+" number is divisible by 5 and 11")
else:
    print(str(a)+" number is not divisible by 5 and 11")
