'''
Program3 -- Write a Program to Print following Pattern.
 	
 		0	0	0	0	0	
  			1	2	3	4	
 				4	6	8
 					9	12
 						16
 			
 
'''
rows = int(input("Enter Number of Rows : \n"))

for x in range(rows):
    for y in range(rows):
        if(y < x):
            print(" ",end="\t")

        else:
            print(x*y,end="\t",sep="")
    print()
