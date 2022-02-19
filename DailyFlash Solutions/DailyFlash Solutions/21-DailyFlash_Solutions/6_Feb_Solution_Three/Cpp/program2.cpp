#include<iostream>


int main(){
	
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	int bin [32];
	int itr=0;
	while(num!=0){
		
		int rem =num%2;

		bin[itr]=rem;	

		itr++;
		num= num/2;

	}	


	for(int jtr = itr -1 ; jtr>=0 ;jtr--){
		
		printf("%d",bin[jtr]);
	}

}		
