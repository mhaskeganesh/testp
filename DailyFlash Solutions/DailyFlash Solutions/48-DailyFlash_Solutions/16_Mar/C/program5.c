
#include <stdio.h>
#include <math.h>

void  main() {

	float x1,y1, x2, y2, x3, y3;
	printf("1st point(A)  : \n");
	scanf("%f%f", &x1, &y1);
	printf("2nd point(B)  : \n");
	scanf("%f%f", &x2, &y2);
	printf("3rd point(C)  : \n");
	scanf("%f%f", &x3, &y3);
	float ab = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
	float bc = sqrt(pow(x2-x3, 2) + pow(y2-y3,2));
	float ac = sqrt(pow(x3-x1, 2) + pow(y3-y1,2));
	printf("Distance of line AB : %5.2f\n", ab);
	printf("Distance of line BC : %5.2f\n", bc);
	printf("Distance of line AC : %5.2f\n", ac);

	printf("Perimeter of Triangle : %5.2f\n", ab + bc + ac);
	float p = (ab + bc + ac)/2;
	printf("Semi-Perimeter of Triangle : %5.2f\n", p);
	float area = sqrt(p*(p-ab)*(p-bc)*(p-ac));
	printf("Area of Triangle : %5.2f\n", area);
	printf("Radius of In-Circle : %5.2f\n", (area / p));
}
