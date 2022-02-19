#include<iostream>

int main() {
	int num, f = 0;
	do {
		if(f > 0)
			std::cout << num * num << "\n";
		std::cin >> num;
		f = 1;
	} while(num >= 0);
	return 0;
}
