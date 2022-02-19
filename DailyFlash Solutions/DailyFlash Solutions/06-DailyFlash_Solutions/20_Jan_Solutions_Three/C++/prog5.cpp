#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++){
			if(i % 2 == 0)
				std::cout << "0 ";
			else  
				std::cout << "1 ";
		}
		std::cout<<std::endl;
	}
	return 0;
}
