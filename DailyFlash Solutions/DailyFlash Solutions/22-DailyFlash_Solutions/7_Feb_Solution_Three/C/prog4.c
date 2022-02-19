#include<stdio.h>

int main(void) {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(j < 3 - i)
				printf("  ");
			else
				printf("%c ", 65 + j);
		}
		printf("\n");	
	}
	return 0;
}
