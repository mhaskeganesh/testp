#include <stdio.h>

void main(){

	int base = 0,height = 0;
	float area = 0;

	printf("Enter Base of Triangle\n");
	scanf("%d",&base);
	printf("Enter height of Triangle\n");
	scanf("%d",&height);

	area = 0.5*base*height;
	printf("Area Of Triangle = %.2f\n",area);

}
