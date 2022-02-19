#include<iostream>
#include<math.h>
int main() {
	int l;
	float mul = 0;
	std::cin >> l;
	for(int i = 1; i <= l; i++) {
		mul += i / (sqrt(i) * (i + 1));
	}
	std::cout << mul;
}
