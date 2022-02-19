#include<stdio.h>

int main() {
	float c;
	printf("Enter circum : ");
	scanf("%f", &c);
	if(c >= 0)
		printf("Dia : %f", c / 3.142);
}
