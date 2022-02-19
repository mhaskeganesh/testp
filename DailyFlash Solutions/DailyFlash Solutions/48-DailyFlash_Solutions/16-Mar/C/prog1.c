#include<stdio.h>
#include<math.h>


int isPrime(int num) {
	int cnt = 0;
	if(num <= 1) {
		return 0;
	}
	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	for(int i = 1; i <= sqrt(num); i++) {
		if(num % i == 0) {
			if(isPrime(i)) {
				printf("%d ", i);
			}
			if(isPrime(num / i) && i != num / i) {
				printf("%d ", num / i);
			}
		}
	}
}
