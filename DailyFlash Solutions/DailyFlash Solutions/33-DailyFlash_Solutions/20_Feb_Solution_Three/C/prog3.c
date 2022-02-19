#include<stdio.h>

int main(void) {
	int l, n, d;
	printf("Enter last term : ");
	scanf("%d", &l);
	printf("Enter common difference : ");
	scanf("%d", &d);
	printf("AP : ");
	while(l > 0) {
		printf("%d ", l);
		l = l - d;
	}
	return 0;
}
