#include<stdio.h>

int main() {
	char ch = 'A';
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			if(i < 3) {
				if(j < 2 - i)
					printf("\t");
				else {
					printf("%c\t", ch);
					ch++;
				}
			} else {
				if(j < i - 2)
					printf("\t");
				else { 
					printf("%c\t", ch);
					ch++;
				}
			}
		}
		printf("\n");
	}
}
