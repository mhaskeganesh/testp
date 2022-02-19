#include<stdio.h>
#include<math.h>
int main(void) {
	float x1, x2, y1, y2, x3, y3, a, b, c;
	printf("(A)Enter x1 : ");
	scanf("%f", &x1);
	printf("(A)Enter y1 : ");
	scanf("%f", &y1);
	printf("(B)Enter x2 : ");
	scanf("%f", &x2);
	printf("(B)Enter y2 : ");
	scanf("%f", &y2);
	printf("(C)Enter x3 : ");
	scanf("%f", &x3);
	printf("(C)Enter y3 : ");
	scanf("%f", &y3);
	float bs;
	printf("Base : ");
	scanf("%f", &bs);
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float s = (a + b + c)/ 2;
	printf("Ht : %f", sqrt(s * (s - a) * (s - b) * (s - c)) * 2 / bs);

	
}
