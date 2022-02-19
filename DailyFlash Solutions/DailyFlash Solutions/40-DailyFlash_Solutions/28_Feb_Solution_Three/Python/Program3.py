'''
Program 4: Write a Program to Print following Pattern.

0A 1B 2C 3D
1A 2B 3D
2A 3B
4A
'''
rows=int(input("Enter no of rows:"))
for x in range(rows):
    for y in range(rows):
    	if x+y < rows :
        	print(str(y+x)+chr(65+y),end=" ")
    print()
