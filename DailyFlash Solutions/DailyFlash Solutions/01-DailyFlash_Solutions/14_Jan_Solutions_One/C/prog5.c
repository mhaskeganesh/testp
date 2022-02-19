#include<stdio.h>

int main() {
	int n1, n2, n3;
	printf("Input : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	n1>n2 && n1>n3 ? printf("Output : %d", n1):n2>n3 ? printf("Output : %d", n2):printf("Output : %d", n3);
	return 0;
}
