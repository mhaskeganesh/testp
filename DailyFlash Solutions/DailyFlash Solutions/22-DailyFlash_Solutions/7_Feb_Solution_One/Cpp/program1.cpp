#include<iostream>


int main(){

	int num ;

	printf("Enter the number : ");
	scanf("%d",&num);
	int flag=0;
	for(int itr = 2 ; itr<=num/2;itr++){
		
		if(num%itr==0){
			
			flag = 1;
			break;
		}	
			

	}	

	if(flag == 0)
		printf("Number is prime");
	else
		printf("NUmber is not prime");
}	
