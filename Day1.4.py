#Program 4: Write a Program to Print following Pattern
#* * * *
#* * * *
#* * * *
#* * * *

noOfLines = 4
for i in range(noOfLines):
    for j in range(noOfLines):
        print("*", end = " ")
        if j != noOfLines-1:
            print(" ", end = " ")
    if i != noOfLines-1:
        print("\n")