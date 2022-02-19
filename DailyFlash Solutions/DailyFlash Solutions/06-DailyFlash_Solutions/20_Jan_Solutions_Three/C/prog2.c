#include<stdio.h>

int main(void) {
	int num, sum = 0;
	printf("Input : ");
	scanf("%d", &num);
	for(int i = 1; i <= num; i++) {
		sum += i;
	}
	printf("Sum : %d", sum);
	return 0;
}
