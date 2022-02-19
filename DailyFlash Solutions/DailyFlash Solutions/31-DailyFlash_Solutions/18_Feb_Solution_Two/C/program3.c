
#include <stdio.h>
#include <stdlib.h>

void  main() {

	int n;
	printf("Enter Radius :");
	scanf("%d", &n);
	if(n<0){
		printf("Radius cannot be negative\n");
		exit(0);
	}
	printf("Circumference : %5.2fcm\n", 2*3.142*n);
}
