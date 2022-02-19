#include<stdio.h>


void main(){
	

	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	char hex[100];

	int itr = 0;
	int rem =0 ;
	while(num!=0){
		
		rem = num%16;

		if(rem<10){
			
			hex[itr]=rem+48;
			
		}else{
			hex[itr]=rem+55;
		}		
		itr++;

		num = num/16;
		
		

	}	


	for(int jtr=itr-1;jtr>=0;jtr--){
		
		printf("%c",hex[jtr]);
	}	

}	
