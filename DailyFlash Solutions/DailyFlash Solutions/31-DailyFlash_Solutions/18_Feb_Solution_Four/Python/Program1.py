'''
Problem Statement


	Program1 -- Write a Program that sums up all the digits from an entered number and finds average of that sum and print them both.
'''

num=input("Enter a Number\n:")
sum = 0
cnt = 0
for x in num :
    sum+=int(x)
    cnt+=1
print("The Sum of digits is ",sum," and Average is ",sum/cnt)

