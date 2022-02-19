#include<stdio.h>
#include<math.h>
int main(void) {
	int num, sum = 0;
	printf("Enter num : ");
	scanf("%d", &num);
	for(int i = 1; i <= sqrt(num); i++) {
		if(num % i == 0) {
			if(num / i == i) {
				printf("%d ", i);
				sum += i;
			} else {
				printf("%d %d ", i, num / i);
				sum += i;
				sum += num / i;
			}
		}
	}

	printf("\nsum = %d", sum);
	return 0;
}
