"""
Program 5: Write a Program to print following Pattern.
Output:
0
1 0
1 0
1 0
1
0 0 0 0
1 1 1 1

"""


for outrItr in range(4):
    for innerItr in range(4):
        if outrItr%2==0:
            print("0",end=" ")
        else:
            print("1",end=" ")
    print(" ")    

