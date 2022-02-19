#include<iostream>
#include<math.h>
int main() {
	int l;
	float mul = 0;
	std::cin >> l;
	for(int i = 1; i <= l; i++) {
		mul += (i-1) * (3.14 / 6);
	}
	std::cout << mul;
}
