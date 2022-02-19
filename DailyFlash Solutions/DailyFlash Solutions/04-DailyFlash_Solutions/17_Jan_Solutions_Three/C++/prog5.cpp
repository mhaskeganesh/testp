#include<iostream>

int main() {
	char ch[2];
	std::cout << "Char : ";
	std::cin.getline(ch, 2);
	std::cout << "ASCII : "<< (int)ch[0];
	return 0;
}
