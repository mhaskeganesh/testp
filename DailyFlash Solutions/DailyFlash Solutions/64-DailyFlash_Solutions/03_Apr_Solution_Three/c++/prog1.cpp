#include<iostream>
#include<math.h>

int fact(int n) {
	if(n == 1)
		return 1;
	return n * fact(n - 1);
}

int main() {
	int l, x, y;
	float sum = 0;
	std::cout << "Length : ";
	std::cin >> l;
	std::cout << "X Y: ";
	std::cin >> x >> y;
	for(int i = 1; i <= l; i++) {
		sum += 1 / ((pow(x+y, i)) *(float)fact(i));	
	}
	std::cout << sum;
}
