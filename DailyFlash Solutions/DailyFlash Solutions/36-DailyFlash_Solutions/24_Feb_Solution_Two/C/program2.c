
#include <stdio.h>
#include <math.h>

void main() {
	float n;
	printf("Enter Number : ");
	scanf("%f", &n);
	float g1, g2, e;
	g1 = (float)(n / 2);
	e = 0.1f;
	while((float)(fabs(g1*g1 - n)) > e){
		g2 = (float)(n / g1);
		g1 = (float)((g1 + g2 )/2);
	}
	printf("Square root : %5.2f\n", g1);
}

