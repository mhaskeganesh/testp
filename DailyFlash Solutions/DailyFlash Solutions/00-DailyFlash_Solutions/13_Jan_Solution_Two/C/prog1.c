#include<stdio.h>

int main() {
	int n1, n2;
	printf("Input : ");
	scanf("%d %d", &n1, &n2);
	n1>n2?printf("Output : %d", n1):n1==n2?printf("Output : Equal"):printf("Output : %d", n2);
	return 0;
}
