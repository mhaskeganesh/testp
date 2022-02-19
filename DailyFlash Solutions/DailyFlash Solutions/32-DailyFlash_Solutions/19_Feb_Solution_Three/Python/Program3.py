'''
Problem Statement

Program3 -- Write a Program to Print following Pattern.

                E	a	D	b	
                        c	C	d	
                                B	e	
                                        f	

'''

rows = int(input("Enter The number of rows\n"))

numCount = 0

for x in range(1,rows+1,2) :
    numCount+=x

odd = 65 + numCount
even = 97

print(numCount)

print("The Output of Pattern is")

for x in range(rows) :

    for y in range(rows):

        if( y < x) :

            print(" \t",end="",sep='')

        else :

            if (y % 2) == 0 :
                print(chr(odd),"\t",end="",sep="")
                odd-=1;
            else :

                print(chr(even),"\t",end="",sep="")
                even+=1;
    print()
