'''
Program3 -- Write a Program to Print following Pattern.
 	
 		white-black	black-white white-black black-white
 		white-black black-white white-black black-white
 		white-black black-white white-black black-white
'''
rows = int(input("Enter Number of Rows : \n"))

b = "black"
w = "white"

for x in range(rows):
    for y in range(rows+1):
        if(y%2 == 0):
            print(w,b,end="\t",sep="-")
        else:
            print(b,w,end="\t",sep="-")
    print()
