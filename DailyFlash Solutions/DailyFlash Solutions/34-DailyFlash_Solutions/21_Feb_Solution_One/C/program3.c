#include<stdio.h>


void main(){

	
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	int rev =0;
	while(num!=0){
		
		rev = rev*10+(num%10);

		num = num/10;
	}	

	int temp = rev;

	while(temp!=0){
		
		int rem = temp%10;

		switch(rem){
			
			case 0:
				printf("zero  ");
				break;
			case 1:
				printf("one  ");
				break;	
			case 2:
				printf("two  ");
				break;	
			case 3:
				printf("three  ");
				break;	
			case 4:
				printf("four  ");	
				break;
			case 5:
				printf("five  ");
				break;	
			case 6:
				printf("six  ");
				break;	
			case 7:
				printf("seven  ");
				break;	
			case 8:
				printf("eight  ");
				break;	
			case 9:
				printf("nine  ");
				break;	

		}	
		temp = temp/10;
	}	
}	
