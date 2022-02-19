#include <iostream>

int main () {
	int n;
	std::cout << ("Enter Natural Number : ");
	scanf("%d", &n);

	if(n <= 0)
		exit(0);

	std::cout << ("Sum : ") << n*(n + 1)/2 << std::endl;
}
