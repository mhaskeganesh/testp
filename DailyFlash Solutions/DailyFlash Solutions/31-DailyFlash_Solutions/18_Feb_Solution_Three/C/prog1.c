#include<stdio.h>

int main(void) {
	int a, n, d;
	printf("Enter 1st term : ");
	scanf("%d", &a);
	printf("Enter number of terms : ");
	scanf("%d", &n);
	printf("Enter common difference : ");
	scanf("%d", &d);
	printf("AP : ");
	for(int i = 1; i <= n; i++) {
		printf("%d ", a + (i - 1) * d);
	}
	return 0;
}
