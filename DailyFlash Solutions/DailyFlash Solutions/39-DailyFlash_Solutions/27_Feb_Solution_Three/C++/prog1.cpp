#include<iostream>

int main() {
	int l, u, temp, rev;
	std::cout << "Enter l: ";
	std::cin >> l;
	std::cout << "Enter u: ";
	std::cin >> u;
	for(int i = l; i <= u; i++) {
		temp = i;
		rev = 0;
		while(temp != 0) {
			rev = rev * 10 + temp % 10;
			temp /= 10;
		}
		if(rev == i) {
			std::cout << i << " ";
		}

	}
}
