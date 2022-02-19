#include<iostream>

int main() {
	int sum = 0;
	for(int j = 1; j <= 100; j++) {
		sum = 0;
		for(int i = 1; i * i <= j; i++) {
			if(j % i == 0) {
				sum += i;
			}
			if(j / i != i && j % (j / i) == 0) {
				if(i == 1)
					continue;	
				sum += j / i;
			}
		}
		if(sum == j && j != 1)
			continue;
		else
			std::cout << j << " ";
	}
}
