#include<stdio.h>

int main(void) {
	int a, n, d;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter d : ");
	scanf("%d", &d);
	printf("sum = %lf", ((float)n/2) * (2 * a + (n - 1) * d));
	return 0;
}
