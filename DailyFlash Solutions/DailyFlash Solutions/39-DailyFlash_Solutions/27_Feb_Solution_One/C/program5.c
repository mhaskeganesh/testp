
#include <stdio.h>

void  main() {

	float x1,y1, x2, y2;
	printf("1st point  : \n");
	scanf("%f%f", &x1, &y1);
	printf("2nd point  : \n");
	scanf("%f%f", &x2, &y2);
	printf("Slope of Line  : %5.2f\n", (y2-y1)/(x2-x1));
}
