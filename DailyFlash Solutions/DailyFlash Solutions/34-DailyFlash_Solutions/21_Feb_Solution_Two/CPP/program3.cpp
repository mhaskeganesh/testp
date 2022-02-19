
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	int rev = 0;
	while(n != 0) {
		rev = rev * 10 + n%10;
		n /= 10;
	}
	n = rev;
	while(n != 0) {
		switch(n%10){
			case 1:
				std::cout << ("One ");
				break;
			case 2:
				std::cout << ("Two ");
				break;
			case 3:
				std::cout << ("Three ");
				break;
			case 4:
				std::cout << ("Four ");
				break;
			case 5:
				std::cout << ("Five ");
				break;
			case 6:
				std::cout << ("Six ");
				break;
			case 7:
				std::cout << ("Seven ");
				break;
			case 8:
				std::cout << ("Eight ");
				break;
			case 9:
				std::cout << ("Nine ");
				break;
			case 0:
				std::cout << ("Zero ");
				break;
			default:
				break;
		}
		n /= 10;
	}
	std::cout << ("\n");
}
