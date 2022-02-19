
#include <stdio.h>
#include <math.h>
#define pie 3.142

void main () {
	int n, x, y;
	float mul = 0;
	printf("Enter length : ");
	scanf("%d", &n);
	printf("Enter x and y : ");
	scanf("%d%d", &x, &y);
	float factor = pie / 6;
	int cnt = 1;
	while(cnt <= n){
		mul = mul + (float)(cnt)/pow((x + y), (cnt % 2 == 0 ? y : x));
		cnt++;
	}
	printf("%f\n",mul);
}
