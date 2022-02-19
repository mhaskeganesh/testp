#include<stdio.h>

int main() {
	float r;
	printf("Radius : ");
	scanf("%f", &r);
	r >= 0 ? printf("Area : %f", 3.14*r*r) : printf("Enter valid redius.");
	return 0;
}
