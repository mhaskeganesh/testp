#include<iostream>
#include<math.h>
int isPrime(int num) {
	if(num == 2)
		return 1;
	if(num <= 1)
		return 0;
	int cnt = 0;
	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0)
			cnt++;
	}
	if(cnt == 0)
		return 1;
	else
		return 0;
}

int main() {
	int num;
	do {
		scanf("%d", &num);
		if(isPrime(num))
			std::cout << num << "\n";
	} while(num > 0);
}
