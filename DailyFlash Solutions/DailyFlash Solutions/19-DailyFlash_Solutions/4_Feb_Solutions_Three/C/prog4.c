#include<stdio.h>

int main(void) {
	int num = 7;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4 - i; j++) {
			printf("%d ", num);
			num += 7;
		}
		printf("\n");	
	}
	return 0;
}
