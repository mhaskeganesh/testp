'''
Write a Program to Print following Pattern.
0 1   10  11
  10  11  100
      100 101
          110
'''

rows=int(input("Enter no. of rows:"))

for x in range(rows):
    for y in range(rows):
        if(y < x):
            print(" ",end="\t")
        else:
            p = bin(x+y)
            print(p[2:],end="\t")
    print()
