#include<stdio.h>
#include<math.h>
int main() {
	double a;
	printf("Enter area: ");
	scanf("%lf", &a);
	if(a >= 0) {
		printf("Radius : %lf", sqrt(a/(3.14)));
	}
}
