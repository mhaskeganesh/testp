
#include <stdio.h>
#include <math.h>

void main () {

	float len;
	printf("Enter length in metre\n");
	scanf("%f", &len);

	float per = (2*3.142)/sqrt(len/9.81);
	printf("Period of that pendulum is : %f seconds\n", per);
	float fre = 1/per;
	printf("Frequency of that pendulum is : %f Hz\n", fre);
	
	return;
}
