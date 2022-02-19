
#include <stdio.h>
#include <math.h>
#define pie 3.142

void main () {
	int b, h;
	float area;
	printf("Enter height and base\n");
	scanf("%d%d",&h,&b);
	area = 0.5 * b * h;
	printf("Area : %f\n", area);
}
