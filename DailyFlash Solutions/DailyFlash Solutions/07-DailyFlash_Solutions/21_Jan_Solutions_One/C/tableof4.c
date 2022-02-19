/*Program 4: Write a Program that accepts an integer from user and print table
of that number.
Input: 4
Output: 4 8 12 16 20 24 28 36 40*/

#include<stdio.h>

void main(){
	int num;
	printf("Enter the number  : ");
	scanf("%d",&num);		
	
	for(int itr = 1 ;itr <= 10 ; itr++){
		
		printf("%d \n",itr*num);
	}	
}	
