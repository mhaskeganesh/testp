'''
Problem Statement

Program3 -- Write a Program to Print following Pattern.
 	
 		0	1	4	9	16
 			2	6	12	20
 				8	15	24
 					18	28
 						32
'''

rows = int(input("Enter The number of rows\n"))

print("The Output of Pattern is")

for x in range(rows) :

    for y in range(rows):

        if( y < x) :

            print(" \t",end="",sep='')
            
        else :

            print(((y*y) + (x*y)),"\t",end="",sep='')
         
    print()
