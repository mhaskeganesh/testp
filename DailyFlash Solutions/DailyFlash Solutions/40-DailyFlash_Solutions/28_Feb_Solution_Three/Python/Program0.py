'''
Program 1: Write a Program that prints whether a number entered by user is
Disarium Number or not.
{Note: A number can be termed as Disarium number if the sum of every digits
raised by their position in that number is equal to that number. E.g. 135, 1 is at
position 1, 3 is at position 2 & 5 is at position 3, then 1^1 + 3^2 + 5^3 = 1 + 9 +
125 = 135, so 135 is a Disarium Number}
'''

num=int(input("Enter the number:"))
temp=num
i=0
digits=[]
while(temp!=0):
    digits.append(temp %10)
    temp=temp//10
    i+=1
exp=i
Sum=0
for j in range(i):
    m=digits[j]**exp
    Sum+=m
    exp-=1
if(num==Sum):
    print("Disarium Number!")
else:
    print("Not a Disarium number!")

