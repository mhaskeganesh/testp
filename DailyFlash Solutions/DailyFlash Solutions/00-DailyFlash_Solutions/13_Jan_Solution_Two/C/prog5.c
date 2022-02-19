#include<stdio.h>

int main() {
	int n1;
	printf("Input : ");
	scanf("%d", &n1);
	n1%5==0 && n1%11==0?printf("Output : Divisible"):printf("Output : Not divisible");
	return 0;
}
