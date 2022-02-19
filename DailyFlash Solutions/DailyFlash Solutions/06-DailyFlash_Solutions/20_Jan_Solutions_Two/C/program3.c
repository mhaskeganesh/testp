
#include <stdio.h>

void main() {
	
	int k;
	printf("Enter Number : ");
	scanf("%d", &k);

	if(k % 2 == 0)
		printf("Even Number\n");
	else
		printf("Odd Number\n");
	return;
}
