/*
Program 2: Write a program that takes electricity unit charges as input and
calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit.

*/

#include<iostream>

int main(){

	int unit;
	printf("Enter the electricity unit \n");
	scanf("%d",&unit);

	if(unit<=50){
		
		printf("Electricity charge %f",unit*0.50);

	}else if(unit<=150){

		
		printf("Electricity charge %f",unit*0.75);

	}else if(unit<=250){
		
		printf("Electricity charge %f",unit*1.20);
	}else{
		
		printf("Electricity charge %f",unit*1.50);
	}	
}	
