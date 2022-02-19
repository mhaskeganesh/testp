#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int max = 0;
	while(num != 0) {
		if(num % 10 >= max) {
			max = num % 10;
		}
		num /= 10;
	}
	printf("Max : %d", max);
}	
