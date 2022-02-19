
#include <iostream>

int main() {

	int a;
	std::cout << ("Enter Size : ");
	std::cin >> a;

	if(a < 0) 
		exit(0);
	
	int s = a * a;
	int k = 2;
	for(int i = 1; i <= s; i++){
		if(i % a == 0) {
			std::cout << k << std::endl;
			k = 2;
		}
		else{
			std::cout << k << "\t";
			k+=2;
		}
	}

	return 0;
}


