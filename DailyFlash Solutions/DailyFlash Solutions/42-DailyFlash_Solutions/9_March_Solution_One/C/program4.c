
#include <stdio.h>

void main() {

	int n, k = 0;
	printf("Enter Number : \n");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= n*2-1; j++){
			if(j >= (n*2)/2 - i && j <= (n*2)/2 + i){
				printf("*\t");
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
