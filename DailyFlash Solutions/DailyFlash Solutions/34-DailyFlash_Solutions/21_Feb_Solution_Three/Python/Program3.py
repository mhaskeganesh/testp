'''
Write a Program to Print following Pattern.
C O R E
  O R E
    R E
      E
'''

string="CORE"

for x in range(len(string)):
    for y in range(len(string)):
        if(y < x):
            print(" ",end=" ")

        else:
            print(string[y],end=" ")
    print()
