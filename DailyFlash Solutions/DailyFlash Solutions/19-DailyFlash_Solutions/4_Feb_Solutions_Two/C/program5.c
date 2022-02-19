
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, sum = 0;
	printf("Enter Number : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n/2; i++){
		
		if(n % i == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
