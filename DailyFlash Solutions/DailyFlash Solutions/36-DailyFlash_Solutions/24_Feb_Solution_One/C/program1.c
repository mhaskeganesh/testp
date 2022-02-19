#include<stdio.h>


void main(){


	for (int itr = 1 ; itr<=100 ; itr++){
		

		int num = itr;
		int sum = 0;
		while(num!=0){
			int rem = num%10;
			sum = sum+rem;
			num = num/10;

		}	
		if(itr%sum ==0){

			printf("%d\n",itr);		
		}	
	}	


}	
