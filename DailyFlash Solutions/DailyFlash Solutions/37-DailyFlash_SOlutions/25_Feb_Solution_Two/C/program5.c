
#include <stdio.h>

void  main() {

	float x1,y1, x2, y2;
	printf("1st point  : \n");
	scanf("%f%f", &x1, &y1);
	printf("2nd point  : \n");
	scanf("%f%f", &x2, &y2);
	printf("Mid point : (%5.2f, %5.2f)\n", (x1 + x2)/2, (y1+y2)/2);
}
