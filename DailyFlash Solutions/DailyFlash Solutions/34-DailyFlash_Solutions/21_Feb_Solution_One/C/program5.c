#include<stdio.h>

int primeOrNot(int);

void main(){
		
	int num;
	int flag = 0;
	printf("Enter the number : ");
	scanf("%d",&num);

	for(int itr = 2  ;itr<=num/2 ; itr++){
		
		if(primeOrNot(itr)==1){
			
			if(primeOrNot(num-itr)==1){
				
				printf("%d = %d + %d \n",num,num-itr,itr);
				flag = 1;
			}	
		}	

	}	

	if(flag==0){
		printf("%d cannot express as the sum of two prime ",num);
	}	

}
	

int primeOrNot(int num){
	
	int flag = 0;
	for(int itr =2; itr<=num/2;itr++){
		
		if(num%itr==0)
			return 0;

	}	
	return 1;

}	
