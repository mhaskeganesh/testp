
#include <stdio.h>
#include <math.h>

void main() {

	float a,r;
	printf("Enter angle in degree and radius\n");
	scanf("%f%f", &a,&r);
	a = 3.142 * (a / 180);

	printf("x : %f\n", r * cos(a));
	printf("y : %f\n", r * sin(a));
}
