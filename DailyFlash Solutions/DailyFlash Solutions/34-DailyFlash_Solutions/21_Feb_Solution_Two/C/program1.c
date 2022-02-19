
#include <stdio.h>
#include <math.h>

void main() {

	float theta, phi,r;
	printf("Enter theta , phi and radius\n");
	scanf("%f%f%f", &theta,&phi, &r);
	theta = 3.142 * (theta / 180);
	phi = 3.142 * (phi / 180);

	printf("x : %f\n", r * sin(theta) * cos(phi));
	printf("y : %f\n", r * sin(phi) * sin(theta));
	printf("z : %f\n", r * cos(theta));
}
