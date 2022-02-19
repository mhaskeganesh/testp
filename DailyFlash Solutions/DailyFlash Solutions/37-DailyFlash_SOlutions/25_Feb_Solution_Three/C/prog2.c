#include<stdio.h>

int main(void) {
	printf("Enter num1 : ");
	int num1;
	scanf("%d", &num1);
	int num2;
	printf("Enter num2 : ");
	scanf("%d", &num2);
	double sqrt;
	double  temp;
	for(int i = num1;i  <= num2; i++) {
		sqrt = i / 2;
		temp = 0;
		while(sqrt != temp) {
			temp = sqrt;
			sqrt = (i / temp + temp) / 2;
		}
		printf("%f ", sqrt);
	}
	return 0;
}
