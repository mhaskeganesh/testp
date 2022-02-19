#include<stdio.h>
#include<math.h>



int main() {
	float l;
	printf("Len: ");
	scanf("%f", &l);
	printf("T = %f", (2 * 3.14) / sqrt(l/9.81));
}
