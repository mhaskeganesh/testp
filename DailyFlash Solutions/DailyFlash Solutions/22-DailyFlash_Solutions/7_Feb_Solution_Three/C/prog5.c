#include<stdio.h>

int main(void) {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(i == j)
				printf("= ");
			else 
				printf("%d ", j + 1);
		}
		printf("\n");
	}
	return 0;
}
