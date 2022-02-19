#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int min = 9;
	while(num != 0) {
		if(num % 10 <= min) {
			min= num % 10;
		}
		num /= 10;
	}
	printf("Min : %d", min);
}	
