#include<iostream>
#include<math.h>

int fact(int n) {
	if(n == 1)
		return 1;
	return n * fact(n - 1);
}
int main() {
	int l;
	std::cout << "Len: ";
	std::cin >> l;
	float mul = 0;
	for(int i = 1; i <= l; i++) {
		mul += 1 / (float)fact(i);
	}
	std::cout << mul;
}
