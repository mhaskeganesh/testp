#include <iostream>
int main() {
	
	int n;
	std:: cout << ("Enter Number : ");
	std::cin >> n;
	if (n == 0)
		exit(0);
	for(int i = 1; i <= 10; i++)
		std:: cout << i * n << " ";
	std:: cout << ("\n");
	
	return 0;
}
