
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int n;
	printf("Enter Number : ");
	int k = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n*2 - 1; i++){

		for(int j = n; j >= 1; j--){

			if(j <= i && i <= n){
				printf("%d\t", (k+i-1)*(k+i-1));
				k++;
			}
			else if(i > n && j <= n - (i-n)) {
				printf("%d\t", (k+i-1)*(k+i-1));
				k++;
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
