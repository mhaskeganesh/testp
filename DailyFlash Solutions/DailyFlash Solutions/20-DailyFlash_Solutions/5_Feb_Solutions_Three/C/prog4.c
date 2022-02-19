#include<stdio.h>

int main(void) {
	int inc = 0, k;
	for(int i = 0; i < 4; i++) {
		k = 0;
		for(int j = 0; j < 4 - i; j++) {
			printf("%c ", 97 + inc + k);
			k++;	
		}
		inc += 2;
		printf("\n");
	}
	return 0;
}
