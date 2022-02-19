#include<stdio.h>

// prototype

int powerOf2(int,int);

void main(){

	int num,rem; 
	int position=1,power=1;
	printf("Enter digit the binary number \n");
	scanf("%d",&num);
	int sum = 0;
	while(num!=0){
		
		rem = num%10;

		if(rem == 1){

			sum = sum + power; 
		}

		power = powerOf2(2,position);	
		position++;

		num = num/10;
		
	}	

	
	printf("%d\n",sum);	
		

		
	

}	


int powerOf2(int under , int upper){


	while(upper !=1){
		
		under = 2*under;
		upper--;
	}	

	return under;

}	
