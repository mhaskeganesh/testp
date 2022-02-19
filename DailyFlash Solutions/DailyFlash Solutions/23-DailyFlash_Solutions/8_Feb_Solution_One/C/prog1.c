#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int sum = 0;
	for(int i = 1; i * i <= num; i++) {
		if(num % i == 0) {
			sum += i;
		}
		if(num / i != i && num % (num / i) == 0) {
			if(i == 1)
				continue;	
			sum += num / i;
		}
	}
	printf("sum = %d", sum);
	if(sum > num) 
		printf("\nAbundant num.");
	else 
		printf("\nNot Abundant num.");
}
