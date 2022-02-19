#include<stdio.h>


void main(){
	
	int num;
	int diff;

	printf("Enter the last number : ");
	scanf("%d",&num);

	printf("Enter the diff : ");
	scanf("%d",&diff);

	for(int itr = num ; itr>0 ; ){
		
		printf("%d\n",itr);
		itr = itr - diff;
	}	

}	
