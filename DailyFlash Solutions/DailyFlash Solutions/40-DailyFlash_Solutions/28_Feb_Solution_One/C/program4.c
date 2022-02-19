
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	if(n < 0)
		return;
	int j;
	for(int i = 0; i < n;i++){
		for(j = 0; j < n - i;j++){
			printf("%d%c\t", (i+j), j+65);
		}
		printf("\n");
	}
}
