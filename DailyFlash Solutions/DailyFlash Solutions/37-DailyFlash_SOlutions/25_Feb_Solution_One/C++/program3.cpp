#include<iostream>

int main() {
	int number;
	printf("Enter num : ");
	scanf("%d", &number);
	int max = 0;
	while(number != 0) {
		if(number % 10 >= max) {
			max = number % 10;
		}
		number /= 10;
	}
	printf("Max : %d", max);
}	
