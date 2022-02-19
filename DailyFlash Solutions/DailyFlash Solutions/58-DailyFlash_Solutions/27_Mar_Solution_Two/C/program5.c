
#include <stdio.h>
#include <math.h>

void main () {
	int x1, y1, x2, y2, x3, y3;
	printf("Enter A ");
	scanf("%d%d", &x1, &y1);
	printf("Enter B ");
	scanf("%d%d", &x2, &y2);
	printf("Enter C ");
	scanf("%d%d", &x3, &y3);

	float ab = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	float bc = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
	float ac = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
	
	float s = (ab + bc + ac)/2;
	float area = sqrt(s *(s-ab)*(s-bc)*(s-ac));
	printf("Height : %f\n", (2*area)/ab);
}
