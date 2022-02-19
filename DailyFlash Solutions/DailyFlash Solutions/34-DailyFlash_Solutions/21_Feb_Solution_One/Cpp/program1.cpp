#include<iostream>
#include<math.h>

int main(){

	double theta,alpha,radius;

	printf("Enter the angle theta : ");
	scanf("%lf",&theta);
	printf("Enter the angle alpha : ");
	scanf("%lf",&alpha);
	printf("Enter the radius : ");
	scanf("%lf",&radius);


	printf("x = %f",radius*sin(theta*(3.14/180))*cos(alpha*(3.14/180)));
	printf("y = %f",radius*sin(theta*(3.14/180))*sin(alpha*(3.14/180)));
	printf("z = %f",radius*cos(theta*(3.14/180)));

	
}	
