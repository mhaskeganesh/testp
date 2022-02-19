#include <stdio.h>
#include <math.h>

void main() {

	double l = 0,sum = 0;
	printf("Enter The Length of the Series\n");
	scanf("%lf",&l);
	

	for(double i = 1; i <= l; i++)
		sum+=i/sqrt(i*(i+1));
	
	printf("Sum of Series = %.2lf\n",sum);
}
