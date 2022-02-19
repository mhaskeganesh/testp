
#include <iostream>

int main() {

	int arr[10];
	float sum = 0;
	
	std::cout << ("Enter Numbers : \n");
	for(int i = 0; i< 10; i++){
		std::cin >> *(arr+i);
		sum = sum + arr[i];
	}

	std::cout << ("Sum : ") <<  (int)(sum) << std::endl;
	std::cout << ("Average : ") << (sum / 10) << std::endl;
}
