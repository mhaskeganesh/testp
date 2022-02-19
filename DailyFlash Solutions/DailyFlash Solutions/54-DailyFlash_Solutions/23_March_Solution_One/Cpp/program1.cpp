#include<iostream>
#include<math.h>

int main(){
	
	double num;

	printf("Enter the number : ");
	scanf("%lf",&num);
	double sum = 0;	

	while(num!=0){
		
		sum = sum + num/sqrt(num*num+1);

		num--;

	}	

	printf("Sum of series : %f",sum);

}	
