
#include <stdio.h>

void main () {
	
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);

	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = 1; j <= n; j++){
			if(i <= n && j <= i){
				printf("*\t");
			}
			else if(i > n && j > i - n) {
				printf("*\t");
			}
		}
		printf("\n");
	}
}
