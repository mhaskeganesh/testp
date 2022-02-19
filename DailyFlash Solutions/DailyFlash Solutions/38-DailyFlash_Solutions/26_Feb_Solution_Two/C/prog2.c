#include<stdio.h>

int main(void) {
	printf("Enter num : ");
	int num;
	scanf("%d", &num);
	if(!(num >= 200 && num <= 600))
		return -1;
	double sqrt = num / 2;
	double  temp = 0;
	while(sqrt != temp) {
		temp = sqrt;
		sqrt = (num / temp + temp) / 2;
	}
	printf("%lf ", sqrt);
	return 0;
}
