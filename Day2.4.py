#Program 4: Write a Program to Print following Pattern
#1 1 1 1
#1 1 1 1
#1 1 1 1
#1 1 1 1

noOfLines = int(input())

for i in range(0,noOfLines):
    for j in range(0,noOfLines):
        print("1", end = " ")
        if j != noOfLines-1:
            print(" ",end = " ")
    if i != noOfLines-1:
        print()