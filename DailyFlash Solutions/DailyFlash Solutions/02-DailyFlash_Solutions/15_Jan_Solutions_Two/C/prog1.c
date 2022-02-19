#include<stdio.h>

int main() {
	char ch;
	printf("Input : ");
	scanf("%c", &ch);
	ch>='A' && ch<='Z'?printf("Output : Uppercase"):ch>='a' && ch<='z'?printf("Output : Lowercase"):printf("Output : None");
	return 0;
}
