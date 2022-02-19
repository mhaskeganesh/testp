#include<stdio.h>

int main() {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num;
	while(num != 0) {
		printf("%d / %d = %d\n", temp, num % 10, temp / (num % 10));
		num /= 10;
	}
	return 0;
}
