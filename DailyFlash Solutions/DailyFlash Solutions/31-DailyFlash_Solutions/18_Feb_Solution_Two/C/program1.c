
#include <stdio.h>

void  main() {

	int n, k = 0, a, d;
	printf("Starting element :");
	scanf("%d", &a);
	printf("Number of element :");
	scanf("%d", &n);
	printf("Common difference :");
	scanf("%d", &d);
	printf("The AP is : ");
	while(k < n) {
		printf("%d ",(a + k * d));
		k++;
	}
	printf("\n");
}
