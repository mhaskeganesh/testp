#include<stdio.h>

int main(void) {
	double num;
	printf("Enter num : ");
	scanf("%lf", &num);
	int temp = num, rem, i = 0; 
	double sum = 0;
	while(temp > 0) {
		rem = temp % 10;
		sum += rem;
		temp /= 10;
		i++;
	}
	printf("sum : %lf\nAvg : %lf", sum, (sum / i));

	return 0;
}
