#include<stdio.h>

int main(void) {
	int n1 = 0;
	int rows;
	printf("Enter rows : ");
	scanf("%d", &rows);
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < 4; j++) {
			if(n1 == 0) {
				printf("white-black ");
				n1 = 1;
			}else if(n1 == 1) {
				printf("black-white ");
				n1 = 0;
			}
		}
		printf("\n");

	}
}
