#include<stdio.h>

int main(void) {
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
	printf("Input : ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
	float sum = n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
	printf("sum : %f\nAvg : %f", sum, sum / 10);
	return 0;
}
