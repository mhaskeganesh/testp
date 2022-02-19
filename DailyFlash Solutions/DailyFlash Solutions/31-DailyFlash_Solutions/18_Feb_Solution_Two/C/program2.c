
#include <stdio.h>

void  main() {

	int n, k = 0;
	double sum = 0;
	printf("Enter Number :");
	scanf("%d", &n);
	while(n!=0) {
		sum = sum + (n%10);
		k++;
		n = n/10;
	}
	printf("Average : %5.2f\nSum : %5.2f\n", sum/k, sum);
}
