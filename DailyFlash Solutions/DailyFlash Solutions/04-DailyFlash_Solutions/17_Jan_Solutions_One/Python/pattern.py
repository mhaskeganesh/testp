"""
Program 4: Write a Program to Print following Pattern
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8

"""

for outer in range(1,5):
    for inner in range(1,5):
        print(inner*2,end=' ')
    print(" ")    
