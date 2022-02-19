#include<stdio.h>

int main(void) {
	int n, c, a = 0, b = 1;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("%d %d ", a, b);
	for(int i = 0; i < n - 2; i++) {
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	return 0;
}
