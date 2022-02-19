
#include<iostream>

int main() {
	
	int n = 0;
	std::cout << ("Enter Numbers : ");
	for(int i = 1; i<=10; i++){
		std::cin >> n;
		if(n<0)
			break;
	}
	
}
