#include<stdio.h>

int main(void) {
	int num, sum, lb, ub;
	printf("Enter lb: ");
	scanf("%d", &lb);
	printf("Enter ub: ");
	scanf("%d", &ub);
	for(int i = lb; i <= ub; i++) {
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
