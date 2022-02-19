
"""
Program 4: Write a Program to Print following Pattern
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16

"""
#METHOD 1
print("Method one to print pattern")
num =1 
for itr in range(4):
    print(str(num)+"\t"+str(num+1)+"\t"+str(num+2)+"\t"+str(num+3))
    num = num + 4 



#METHOD 2
# run with python3.x
print("Method two to print pattern")
num = 1
for outeritr in range(4):
    for inneritr in range(4):
        print(str(num)+"\t",end="")
        num = num + 1
    print(" ")    
