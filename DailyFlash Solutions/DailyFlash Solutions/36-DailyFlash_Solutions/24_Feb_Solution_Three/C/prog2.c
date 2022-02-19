#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int sqrt = num / 2;
	int temp = 0;
	while(sqrt != temp) {
		temp = sqrt;
		sqrt = (num / temp + temp) / 2;
	}
	printf("Sqrt of %d is %d", num, sqrt);
	return 0;
}
