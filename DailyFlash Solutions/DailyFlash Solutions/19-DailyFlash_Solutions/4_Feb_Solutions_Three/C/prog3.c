#include<stdio.h>

int main(void) {
	float dist;
	printf("Enter dist(ft): ");
	scanf("%f", &dist);
	if(dist >= 0) {
		printf("Dist(cm) : %f", dist * 30);
	} else {
		printf("Enter valid det.");
	}
	return 0;
}
