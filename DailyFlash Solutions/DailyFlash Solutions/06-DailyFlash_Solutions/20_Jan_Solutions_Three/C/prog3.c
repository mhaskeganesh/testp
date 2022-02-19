#include<stdio.h>

int main(void) {
	int i;
	printf("Input : ");
	scanf("%d", &i);
	i % 2 == 0 ? printf("Output : Even") : printf("Output : Odd");
	return 0;
}
