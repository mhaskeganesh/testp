
#include <stdio.h>

void  main() {

	int n, k = 0, a, d;
	printf("Starting element :");
	scanf("%d", &a);
	printf("Number of element :");
	scanf("%d", &n);
	printf("Common difference :");
	scanf("%d", &d);
	printf("The sum is : %d" , (n/2)*(2*a + (n-1)*d));
	printf("\n");
}
