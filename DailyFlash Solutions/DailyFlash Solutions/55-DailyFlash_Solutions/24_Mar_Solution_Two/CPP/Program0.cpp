#include <stdio.h>

#define PI 3.14

int main() {

	int l = 0;
	float sum = 0;
	printf("Enter The Length of the Series\n");
	scanf("%d",&l);


	for(int i = 0; i < l; i++)
		sum+=(i*PI)/6;

	printf("Sum of Series = %.2f\n",sum);

	return 0;
}
