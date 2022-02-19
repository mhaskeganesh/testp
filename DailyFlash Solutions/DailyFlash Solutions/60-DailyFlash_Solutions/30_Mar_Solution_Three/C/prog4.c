#include<stdio.h>

int main() {
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			if(i < 3) {
				if(j < 2 - i)
					printf(" ");
				else
					printf("0");
			} else {
				if(j < i - 2)
					printf(" ");
				else 
					printf("0");
			}
		}
		printf("\n");
	}
}
