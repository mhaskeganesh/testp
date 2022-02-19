'''
Problem Statement

Program0 -- Write a Program to print an Arithmetic Progression (A.P.) series. Take Starting element, Total count of elements in A.P. & the Common
Difference from user.
{Note: an AP (i.e. Arithmetic Progression is such series which has common difference between every consecutive elements, AP of common difference 2
starting from 20 can be: 20, 22, 24, 26 . . .}
'''

start,count,diff=input("Enter Start, Number of elements and Common Difference of AP in same order\n:").split()
start = int(start)
count = int(count)
diff = int(diff)

print("The Arithmetic Progression is ")

for x in range(count) :

    print(start + (x*diff),end=" ")

print()

