#include<stdio.h>

int main() {
	char ch;
	printf("Input : ");
	scanf("%c", &ch);
	ch>='A' && ch<='Z' || ch>='a' && ch<='z'?printf("Output : Aplhabet"):printf("Output : Not alphabet");
	return 0;
}
