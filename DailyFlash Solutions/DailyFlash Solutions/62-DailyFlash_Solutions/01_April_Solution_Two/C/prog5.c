#include<stdio.h>
#include<math.h>



int main() {
	float T;
	printf("T: ");
	scanf("%f", &T);
	printf("F = %f", (4 * 3.14 * 3.14 * 9.81)/(2 * T));
}
