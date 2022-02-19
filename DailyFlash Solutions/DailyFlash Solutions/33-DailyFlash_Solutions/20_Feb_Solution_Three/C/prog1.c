#include<stdio.h>
#include<math.h>
int main(void) {

	double r, th;
	printf("Enter radius : ");
	scanf("%lf", &r);
	printf("Enter angle : ");
	scanf("%lf", &th);
	printf("x : %lf\ny : %lf",r * cos(th), r * sin(th));
	return 0;
}	
