
#include <stdio.h>

void  main() {
	int n, temp, i = 0;
	printf("Enter Number :");
	scanf("%d", &n);
	temp = n;
	while(n!=0) {
		printf("%d/%d = %d\n", temp, n%10, temp/(n%10));
		n = n/10;
	}
}
