/*
Program 2 : Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The s um number up to 10 : 55
*/

#include<iostream>

int main(){

	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	int sum =0 ;
	for(int i=1;i<=num;i++){
		
		sum = sum + i;

	}	

	printf("The sum number up to %d : %d",num,sum);

}	
