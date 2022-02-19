
#include <stdio.h>
#include <math.h>

void  main() {

	float x1,y1, x2, y2;
	printf("1st point  : \n");
	scanf("%f%f", &x1, &y1);
	printf("2nd point  : \n");
	scanf("%f%f", &x2, &y2);
	float dis = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
	printf("Distance of line  : %5.2f\n", dis);
}
