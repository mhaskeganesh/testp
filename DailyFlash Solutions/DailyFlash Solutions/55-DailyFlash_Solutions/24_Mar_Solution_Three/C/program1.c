
#include <stdio.h>
#include <math.h>
#define pie 3.142

void main () {
	int n;
	float mul = 0;
	printf("Enter Number : ");
	scanf("%d", &n);
	float factor = pie / 6;
	int cnt = 0;
	while(cnt != n){
		mul = mul + factor;
		cnt++;
	}
	printf("%f\n",mul);
}
