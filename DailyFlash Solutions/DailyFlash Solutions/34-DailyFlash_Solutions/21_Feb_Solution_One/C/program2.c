#include<stdio.h>

void main(){
	
	int num ;

	printf("Enter the number  : ");
	scanf("%d",&num);

	int oct[5];
	
	while(num!=0){
		int rem = num%10;
		int temp = rem;
		int octrem;
		int itr = 0;
		while(rem!=0){
			octrem = rem%8;
			oct[itr]=octrem;

			rem = rem /8;
			itr++;	
		}	
		printf("Oct of num %d = ",temp);
		for(int i = itr-1;i>=0;i--){
			
			printf("%d",oct[i]);
		}
		printf("\n");	

		num = num/10;


	}	

}	
