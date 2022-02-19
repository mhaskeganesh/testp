#include<stdio.h>

int main(void) {

	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	while(num != 0) {
		printf("Hex of %d is %d\n", num % 10, num % 10);
		num /= 10;
	}
	return 0;
}
