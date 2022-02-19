#include<stdio.h>

int main() {
	int n1, n2, n3;
	printf("Input : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	n1>=0 && n2>=0 && n3>=0 && n1+n2+n3 == 180?printf("Output : Valid"):printf("Output : Invalid");
	return 0;
}
