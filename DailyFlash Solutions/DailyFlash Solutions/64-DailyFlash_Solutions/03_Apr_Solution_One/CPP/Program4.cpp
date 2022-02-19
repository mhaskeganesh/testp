#include<stdio.h>
#include<math.h>


int main(){

	double freq = 0,length = 0;
	double g=9.81;

	printf("Enter the frequency of Pendulum in Hz : \n");
	scanf("%lf",&freq);


	length = (4*(3.142*3.142)*(freq*freq))/g;

	printf("Length is : %.2lf\n",length);

	return 0;
}
