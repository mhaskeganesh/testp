/*
 
Program 5: Write a Program to check whether the number is divisible by 5 &
11 or not.
Input: 55
Output: 55 is divisible by 5 & 11.


 */

#include<stdio.h>

void main(){
	
	int num = 55;

	if(num%5==0 && num%11==0)
		printf("%d is divisible by 5 and 11",num);	
}	


/*
 
   output

   55 is divisible by 5 and 11


 */
