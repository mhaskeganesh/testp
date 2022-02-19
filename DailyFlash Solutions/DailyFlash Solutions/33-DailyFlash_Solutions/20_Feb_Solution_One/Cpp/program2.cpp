#include<iostream>

int main(){
	

	int num ;

	printf("Enter the number : \n");
	scanf("%d",&num);

	while(num!=0){
	
		int rem = num%10;

		printf("hex no. %d = %d\n",rem,rem);

		num = num/10;
	}	



}	
