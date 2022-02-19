#include<iostream>

int main() {
	int n = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++){
			std::cout<<n<<"\t\t";
			n++;
		}
		std::cout<<std::endl;
	}
	return 0;
}
