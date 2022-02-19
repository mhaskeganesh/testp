'''

Program3 -- Write a Program to Print following Pattern.
 	
		*	*	*	*	
		* 	*	*
 		*	*
 		*	
'''
rows = int(input("Enter Number of Rows : \n"))


for x in range(rows):
    for y in range(rows):
        if((y+x) < rows):
        	print("*",end="\t",sep="")
    print()
   
