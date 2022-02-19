#include<stdio.h>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				printf(" ");
			} else {
				if(i == 3) {
					printf("%d", j + 2);
					continue;
				}
				printf("%d", j + 1);
			}
		}
		printf("\n");
	}
}
