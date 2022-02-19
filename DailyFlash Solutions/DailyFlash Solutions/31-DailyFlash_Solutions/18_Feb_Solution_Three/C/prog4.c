#include<stdio.h>

int main(void) {
	int n;
	printf("Enter num : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j >= i) {
				printf("%d\t", j * j + (i * j));
			} else {
				printf(" \t");
			}
		}
		printf("\n");
	}
	return 0;
}
