#include<stdio.h>

int main(void) {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4 - i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
