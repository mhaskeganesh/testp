
#include <stdio.h>

void  main() {

	int a, d;
	printf("Ending element :");
	scanf("%d", &a);
	printf("Common difference :");
	scanf("%d", &d);
	while(a>0) {
		printf("%d ", a);
		a = a - d;
	}
	printf("\n");
}
