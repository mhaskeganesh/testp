
#include <stdio.h>
#include <math.h>

void main () {

	float len, per;
	printf("Enter fre in Hz\n");
	scanf("%f", &per);
	
	/*float per = (2*3.142)/sqrt(len/9.81);
	printf("Period of that pendulum is : %f seconds\n", per);
	float fre = 1/per;
	printf("Frequency of that pendulum is : %f Hz\n", fre);*/
	
	//float g = (4*3.142*3.142*len)/(per*per);
	//printf("Acceleration of that pendulum is : %f m/sq sec\n", g);
	len = (4*3.142*3.142*per*per)/9.81;
	printf("Length of that pendulum is : %f m\n", len);

	return;
}
