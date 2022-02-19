#include<stdio.h>

int main(void) {
	float x1, x2, y1, y2;
	printf("Enter x1 : ");
	scanf("%f", &x1);
	printf("Enter x2 : ");
	scanf("%f", &x2);
	printf("Enter y1 : ");
	scanf("%f", &y1);
	printf("Enter y2 : ");
	scanf("%f", &y2);
	printf("Mid-point : (%f, %f)", (x1 + x2) / 2, (y1 + y2) / 2);
}
