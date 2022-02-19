#include<stdio.h>
#include<math.h>


int main(){

	double length;
	double g=9.81;

	printf("Enter the length of pendulum : \n");
	scanf("%lf",&length);

	double time = (2*3.142)/sqrt(length/g);

	printf("Time period is : %.2lf\n",time);

	double freq = 1/time;

	printf("Frequency of Pendulum  is : %.2lf\n",freq);

	return 0;
}
