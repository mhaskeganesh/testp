
#include <stdio.h>

void main () {
	int n;

	printf("Enter Number : ");
	scanf("%d", &n);

	int max,rev = 0;
	printf("Enter Digit to replace 1 : ");
	scanf("%d", &max);
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while(rev != 0){
		if(rev % 10 == 1)
			n = n * 10 + max;
		else
			n = n * 10 + rev % 10;
		rev /= 10;

	}
	printf("%d\n", n);
}
