#include <stdio.h>
#include <math.h>

int main(){

	float len = 0,period = 0;

	printf("Enter Length of Pendulum in Meters\n");
	scanf("%f",&len);

	period = 2*3.142*(sqrt(len/9.81));
	
	printf("Period of Pendulum is %.2f\n",period);

	return 0;
}
