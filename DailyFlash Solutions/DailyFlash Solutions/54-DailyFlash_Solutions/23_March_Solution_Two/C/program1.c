
#include <stdio.h>
#include <math.h>

void main () {
	int n;
	float mul;
	printf("Enter Number : ");
	scanf("%d", &n);
	
	mul = 1;
	for(int i = 1; i<= n; i++){
		mul = mul+ (float)i/(sqrt(i*(i+1)));
	}
	printf("%f\n",mul);
}
