#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++){
			std::cout<<2 * (j + 1)<<"\t";
		}
		std::cout<<std::endl;
	}
	return 0;
}
