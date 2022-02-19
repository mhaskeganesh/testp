
#include <iostream>

int main () {

	int *kbd, n;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	kbd = new int[n];
	for(int i = 0; i<n; i++)
		std::cin >> kbd[i];
	
	for(int i = 0; i<n; i++)
		std::cout << (*(kbd + i)) << " "; 

}
