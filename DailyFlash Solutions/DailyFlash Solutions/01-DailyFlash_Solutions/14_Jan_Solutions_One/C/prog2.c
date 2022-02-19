#include<stdio.h>

int main() {
	char ch;
	printf("Input : ");
	scanf("%c", &ch);
	ch=='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'?printf("Output : Vowel"):ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'?printf("Output : Consonent"):printf("Output : Not a  vowel or consonent");
	return 0;
}
