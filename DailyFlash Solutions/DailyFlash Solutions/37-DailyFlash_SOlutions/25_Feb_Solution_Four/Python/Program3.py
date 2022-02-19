'''

Program3 -- Write a Program to Print following Pattern.
 	
 		1	2	3	4	
  		4	1	2	3		
 		3	4	1	2
 		2	3	4	1	
'''
rows = int(input("Enter Number of Rows : \n"))

tp = 1

for x in range(rows):
    for y in range(rows):
        if(y == x):
            tp = 1
        print(tp,end="\t",sep="")
        tp+=1
    print()
    tp-=1
