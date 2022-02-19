
#include <stdio.h>

void  main() {

	int n, k = 0;
	printf("Enter Number :");
	scanf("%d", &n);
	while(n!=0) {
		if(n % (n%10) == 0){
			printf("%d ", n%10);
		}
		n = n/10;
	}
	printf("\n");
}
