#include<stdio.h>

int main(void) {
	
	int num, rem, flag = 0, sum;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num;
	while(num != 0) {
		rem = num % 10;
		sum = 0;
		for(int i = 1; i <= rem / 2; i++) {
			if(rem % i == 0) 
				sum += i;
		}
		if(sum == rem) {
			printf("%d ", rem);
			flag++;
		}
		num /= 10;
	}
	if(flag == 0)
		printf("The num %d not have any digit ehich is perfect in nature.", temp);
	return 0;
}
