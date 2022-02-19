#include<stdio.h>

int main(void) {
	int num = 65;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4 - i; j++) {
			printf("%c ", num);
			if(j < 3 - i)
				num += j + 1;
		}
		printf("\n");
	}
}
