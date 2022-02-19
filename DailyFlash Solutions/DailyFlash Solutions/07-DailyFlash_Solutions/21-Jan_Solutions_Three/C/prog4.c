#include<stdio.h>

int main(void) {
	int num;
	printf("Input : ");
	scanf("%d", &num);
	for(int i = 1; i <= 10; i++) {
		printf("%d ", num * i);	
	}
	return 0;
}
