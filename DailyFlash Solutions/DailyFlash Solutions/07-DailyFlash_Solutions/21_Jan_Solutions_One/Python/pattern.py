"""Program 5 : Write a Program to print following Pattern.
Output :
0
0 0 
0 0 0
0 0 0 0"""


for out in range(4):
    for inner in range(out+1):
        print("0",end=" ")
    print(" ")    

