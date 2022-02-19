
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = n; j >= 1; j--){

			if(j <= i && i <= n){
				printf("0\t");
			}
			else if(i > n && j <= n - (i-n)) {
				printf("0\t");
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
