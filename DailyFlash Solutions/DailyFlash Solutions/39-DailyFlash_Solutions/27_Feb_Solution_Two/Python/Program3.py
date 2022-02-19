'''

Program3 -- Write a Program to Print following Pattern.
 	
		A	B	D	G
 		G	H	J
 		J	K
 		K	
'''
rows = int(input("Enter Number of Rows : \n"))

ch = 65

for x in range(rows):
    for y in range(rows):
        if((y+x) < rows):
        	
        	ch+=y
        	print(chr(ch),end="\t",sep="")
    print()
   
