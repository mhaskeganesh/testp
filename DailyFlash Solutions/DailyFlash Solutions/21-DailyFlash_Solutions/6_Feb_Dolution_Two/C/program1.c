
#include<stdio.h>
void exit(int);

void main() {
	
	int n, a = 0, b = 1, c;
	printf("Enter Limit : ");
	scanf("%d", &n);

	if(n<=0)
		exit(0);
	else if(n == 1)
		printf("0");
	else if(n == 2)
		printf("0 1");
	else {
		c = a + b;
		printf("0 1 ");
		for(int i = 3; i <= n; i++){
			printf("%d ", c);
			a = b;
			b = c;
			c = a + b;
		}
		printf("\n");
	}
}
