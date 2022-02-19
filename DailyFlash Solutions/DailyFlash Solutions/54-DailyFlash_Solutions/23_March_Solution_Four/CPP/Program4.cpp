#include <stdlib.h>
#include<stdio.h>
#include<math.h>

float squareRoot(int num){

	float sqrt = num ,temp=0;

	while(sqrt!= temp){
	
		temp = sqrt;
		sqrt = (num/temp+temp)/2;
	}
	return sqrt;
}

int main(){

	int num,sum=0,choice = 0;
	float avg,variance = 0;

	printf("Enter Value of N : ");
	scanf("%d",&num);

	int arr[num];

	printf("Enter %d number : \n",num);
	for(int i=0;i<num;i++){

		scanf("%d",&arr[i]);
		sum+=arr[i];
	}

	avg = (float)sum/num;
	for(int i=0;i<num;i++){

		variance += ((arr[i]-avg)*(arr[i]-avg)) / num;
	}

	do {

		printf("Enter your Choice\n");
		printf("1 : Calculate Average\n2 : Calculate Variance\n3 : Calculate Standard deviation\n");
		scanf("%d",&choice);

		switch(choice) {

			case 1 : printf("Average (a) of Numbers : %.2f\n",avg);
				 break;

			case 2 : printf("Variance of Numbers : %.2f\n",variance);
				 break;
			case 3 : printf("Standard Deviation of Numbers: %.2f\n",squareRoot(variance));
				 break;
			default : exit(0);
		}
	}while(1);
	return 0;
}
