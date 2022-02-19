#include<stdio.h>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j < 3 - i) {
					printf(" ");
				} else {
					printf("*");
				}
			} else {
				if(j < 4 + i)
					printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
