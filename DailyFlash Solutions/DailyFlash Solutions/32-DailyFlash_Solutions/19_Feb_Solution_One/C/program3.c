
#include <stdio.h>
#include <stdlib.h>

void  main() {

	int n;
	printf("Enter Circumference of Circle :");
	scanf("%d", &n);
	if(n<0){
		printf("Circumference cannot be negative\n");
		exit(0);
	}
	printf("radius : %5.2fcm\n", n/(2*3.142));
}
