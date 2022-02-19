#include<stdio.h>
#include<math.h>


int main(){

	double time;
	double g=9.81;

	printf("Enter the time period of pendulum : \n");
	scanf("%lf",&time);

	double length = (4*(3.14*3.14)*g)/(time*time);

	printf("Length is : %.2lf\n",length);

	return 0;
}
