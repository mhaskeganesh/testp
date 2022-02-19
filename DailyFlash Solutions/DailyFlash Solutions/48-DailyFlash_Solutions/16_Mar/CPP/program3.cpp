
#include <iostream>

int main () {
	int n,temp,rev;

	std::cout << ("Enter Numbers : ");
	do {
		std::cin >> n;
		rev = 0;
		temp = n;
		while(n != 0){
			rev = rev * 10 + n % 10;
			n /= 10;
		}
		if(temp != rev)
			std::cout << (temp) << std::endl;
		else
			break;
	}while(1);
}
