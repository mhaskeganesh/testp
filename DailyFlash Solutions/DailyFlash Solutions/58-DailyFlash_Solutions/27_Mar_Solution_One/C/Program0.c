#include <stdio.h>
#include <math.h>

void main() {

	int l = 0,x = 0,y = 0;
	float sum = 0;
	printf("Enter The Length of the Series\n");
	scanf("%d",&l);

	printf("Enter value of x\n");
	scanf("%d",&x);

	printf("Enter value of y\n");
	scanf("%d",&y);

	int t = x + y;
	for(int i = 1; i <= l; i++){

		if(i%2 == 0)	
			sum+=(i/(pow(t,y)));
		else
			sum+=(i/(pow(t,x)));
	}

	printf("Sum of Series = %.4f\n",sum);
}
