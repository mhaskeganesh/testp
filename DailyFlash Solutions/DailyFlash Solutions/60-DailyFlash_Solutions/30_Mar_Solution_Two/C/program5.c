
#include <stdio.h>
#include <math.h>

void main () {

	float len;
	printf("Enter length in metre\n");
	scanf("%f", &len);

	printf("Period of that pendulum is : %f seconds\n", (2*3.142)/sqrt(len/9.81));
	
	return;
}
