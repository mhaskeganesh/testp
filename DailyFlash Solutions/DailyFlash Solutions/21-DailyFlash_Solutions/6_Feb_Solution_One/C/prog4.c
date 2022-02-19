#include<stdio.h>

int main(void) {
	int inc = 0;
	for(int i = 0; i < 4; i++) {
		inc = 0;
		for(int j = 0; j < 4; j++) {
			if(j < 3 - i) {
				printf("  ");
			} else {
				printf("%c ", (char)(65+ inc));
				inc++;
			}
		}
		printf("\n");	
	}
	return 0;
}
