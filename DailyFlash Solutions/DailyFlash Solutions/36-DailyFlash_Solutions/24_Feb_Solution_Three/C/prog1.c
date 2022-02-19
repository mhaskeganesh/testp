#include<stdio.h>

int main(void) {
	int num, sum, n;
	printf("Enter num : ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		num = i;
		sum = 0;
		while(num != 0) {
			sum = sum + num % 10;
			num /= 10;
		}
		if(i % sum == 0) {
		       printf("%d ", i);
		} 
	}
}
