
#include <stdio.h>
#include <stdlib.h>

void main () {
	
	int n,k;
	printf("Enter Size : ");
	scanf("%d", &n);
	if(n< 0)
		exit(0);

	for(int i = 1; i <= n; i++){
		k = i % 2 == 0 ? 1 : 0;

		for(int j = 1; j <= n; j++){
			printf("%d  ", k);	
		}	
		printf("\n");
	}
	
}
