
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, flag = 0;
	printf("Enter ft : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	printf("Equivalent distance for %dft in cm is %dcm\n", n, n * 30);
}
