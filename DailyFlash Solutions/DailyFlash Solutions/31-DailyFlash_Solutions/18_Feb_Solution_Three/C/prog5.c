#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num;
	printf("Perfect divisors : ");
	while(num != 0) {
		if(temp % (num % 10) == 0) {
			printf("%d ", num % 10);
		}
		num /= 10;
	}
	return 0;
}
