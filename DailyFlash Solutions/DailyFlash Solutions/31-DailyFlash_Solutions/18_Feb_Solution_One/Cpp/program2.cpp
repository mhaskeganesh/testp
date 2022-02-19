#include<iostream>


int main(){
	
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
		
	int sum =0 ;
	int count=0;
	while(num!=0){
		
		int rem = num%10;

		sum =sum+rem;

		count++;

		num = num/10;


	}	

	printf("Sum = %d\n",sum);
	printf("average = %d",sum/count);
}	
