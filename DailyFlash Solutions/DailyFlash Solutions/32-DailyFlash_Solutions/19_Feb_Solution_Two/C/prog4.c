#include<stdio.h>

int main(void) {
	char c1 = 'E', c2 = 'a';
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(j >= i) {
				if(j % 2 == 0) {
					printf("%c ", c1);
					c1--;
				} else {
					printf("%c ", c2);
					c2++;
				}
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
