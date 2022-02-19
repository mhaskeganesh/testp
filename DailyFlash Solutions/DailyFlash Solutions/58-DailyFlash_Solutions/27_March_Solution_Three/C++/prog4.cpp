#include<iostream>

int main() {
	
	for(int i = 0; i < 7; i++) {
		if(i < 4) {
			for(int j = 0; j < i + 1; j++) {
				
				if(j == 0)
					std::cout << "H";
				if(j == 1)
					std::cout << "O";
				if(j == 2)
					std::cout << "M";
				if(j == 3)
					std::cout << "E";
			} 
		} else {
			for(int j = 0; j < 7 - i; j++) {
				 if(j == 0)
                                        std::cout << "H";
                                if(j == 1)
                                        std::cout << "O";
                               	if(j == 2)
                                        std::cout << "M";
                                if(j == 3)
                                        std::cout << "E";


			}
		}
		std::cout << "\n";
	}
}
