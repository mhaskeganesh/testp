
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	if(n < 0)
		return;

	for(int i = 0; i < n;i++){
		for(int j = 0; j < n - i;j++){
			printf("*\t");
		}
		printf("\n");
	}
}
