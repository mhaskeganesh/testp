
#include <iostream>

int main () {
	
	int n[5];
	std::cout << ("Enter Numbers : ");
	std::cin >> n[0];
	for(int i = 1; i < 5; i++){
		std::cin >> n[i];
		if(n[i-1] > n[i]){
			std::cout << ("Loop exited with ") << n[i] << std::endl;
			break;
		}
	}	

}
