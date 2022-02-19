#include<iostream>


int main(){

	int start,number,difference;

	printf("Ente the first element : ");
	scanf("%d",&start);
	printf("Ente the no. of element element : ");
	scanf("%d",&number);
	printf("Ente the diff element : ");
	scanf("%d",&difference);

	int temp=start;
	for(int itr =1 ; itr<=number ; itr++){
		
		printf("%d\t",temp);

		temp = temp + difference;
		
	}	

}	
