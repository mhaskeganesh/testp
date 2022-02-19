"""
Program 2 : Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The s um number up to 10 : 55

"""


num = input("Enter the number : ")
sum1 = 0
for itr in range(1,num+1):
    sum1 = sum1 + itr

print("The Sum of number upto "+str(num)+" : "+str(sum1))    
    

