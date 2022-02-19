#include<stdio.h>

int main() {
	int n1;
	printf("Input : ");
	scanf("%d", &n1);
	n1<0?printf("Output : Negative"):n1==0?printf("Output : Zero"):printf("Output : Positive");
	return 0;
}
