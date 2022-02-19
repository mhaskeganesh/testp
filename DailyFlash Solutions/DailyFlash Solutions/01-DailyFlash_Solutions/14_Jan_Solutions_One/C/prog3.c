#include<stdio.h>

int main() {
	char ch;
	printf("Input : ");
	scanf("%c", &ch);
	ch>='A' && ch<='Z' || ch>='a' && ch<='z'?printf("Output : Aplhabet"):ch>=48 && ch<=57?printf("Output : Digit"):ch>=33 && ch<=47 || ch>=58 && ch<=64?printf("Output : Special character"):printf("Output : Other");
	return 0;
}
