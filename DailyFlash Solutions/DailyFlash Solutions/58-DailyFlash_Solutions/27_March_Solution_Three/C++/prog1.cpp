#include<iostream>
#include<math.h>
int main() {
	int l, x, y;
	float mul = 0;
	std::cin >> l >> x >> y;
	for(int i = 1; i <= l; i++) {
		if(i % 2 == 1)
		mul += (i) / pow(x + y, x);
		else
		mul += (i) / pow(x + y, y);
	}
	std::cout << mul;
}
