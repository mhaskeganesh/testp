#include<stdio.h>

int main() {
	for(int i = 0; i < 7; i++) {
		if(i < 4) { 
			for(int j = 0; j < i + 1; j++) {
				printf("*");
			}
		} else {
			for(int j = 0; j < 7 - i; j++) {
				printf("*");
			}
		}
		printf("\n");
	}
}
