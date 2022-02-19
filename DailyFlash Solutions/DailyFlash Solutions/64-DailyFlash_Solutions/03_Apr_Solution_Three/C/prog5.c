#include<stdio.h>
#include<math.h>



int main() {
	float F;
	printf("F : ");
	scanf("%f", &F);
	printf("L = %f", (4 * 3.14 * 3.14 * F * F) / 9.81);
}
