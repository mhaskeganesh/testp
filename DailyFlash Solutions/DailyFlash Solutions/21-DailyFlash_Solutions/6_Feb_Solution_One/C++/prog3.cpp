#include<iostream>

int main() {
	int num, i = 0;;
	std::cout << "Enter 10 numbers : \n";
	while(i < 10) {
		std::cin >> num;
		if(num < 0)
			break;
		i++;
	}
	return 0;
}
