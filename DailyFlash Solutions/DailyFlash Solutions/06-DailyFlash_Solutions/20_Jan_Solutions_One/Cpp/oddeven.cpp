/*
Program 3 : Write a Program that accepts a n inte ger from user and prints
whether that number is odd or even .
Input: 2
Output: 2 is an Even Number

*/


#include<iostream>

int main(){
	
	int num;

	printf("Enter the number ");
	scanf("%d",&num);

	if(num%2==0){
		printf("%d is Even Number",num);
	}else{
		printf("%d is Odd Number",num);
	}	
}	
