#include<stdio.h>


void main(){
	
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	int temp = num;
	while(num!=0){

		int rem = num%10;

		if(temp%rem==0)
			printf("%d",rem);

		num = num/10;
	}	

}	
