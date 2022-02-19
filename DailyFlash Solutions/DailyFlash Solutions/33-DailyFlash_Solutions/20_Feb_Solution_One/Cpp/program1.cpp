#include<iostream>
#include<math.h>

int main(){
	

	double angle;
	int radius;

	printf("Enter the angle : ");
	scanf("%f",&angle);

	printf("Enter the radius : ");
	scanf("%d",&radius);


	printf("x = %f",radius*sin(angle*(3.14/180)));
	printf("y = %f",radius*cos(angle*(3.14/180)));
	


}	
