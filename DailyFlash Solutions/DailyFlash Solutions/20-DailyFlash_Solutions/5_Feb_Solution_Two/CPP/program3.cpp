
#include <iostream>

int main() {
	for(int i = 1; i <= 100; i++){
		if(i % 2 == 0)
			continue;
		else
			std::cout << (i) << " ";
	}
	std::cout << ("\n");
}
