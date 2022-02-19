#include <stdio.h>

float factorial(int num){

	float fact = 1;
	for(int i = 1; i <= num; i++){

		fact*=i;
	}
	return fact;
}

int main() {

	int l = 0;
	float sum = 0;
	printf("Enter The Length of the Series\n");
	scanf("%d",&l);

	for(int i = 1; i <= l; i++){

		sum+=(1/factorial(i));
	}

	printf("Sum of Series = %.3f\n",sum);
	return 0;
}
