#include<stdio.h>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j > 2 - i) {
					if(j == 3) 
						printf("#");
					else
						printf("*");
				} else {
					printf(" ");
				}
			} else {
				if(j < 4 + i) {
					printf("*");
				}
			}
		}
		printf("\n");
	}
}
