#include <iostream>

int main() {
	char c;

	std::cout << ("Enter Month Number: ") << std::endl;
	std::cin >> c;
	
	switch(c){
		case 48:
			std::cout << "Sunday" << std::endl;
			break;
		case 49:
			std::cout << "Monday" << std::endl;
			break;
		case 50:
			std::cout << "Tuesday" << std::endl;
			break;
		case 51:
			std::cout << "Wednesday" << std::endl;
			break;
		case 52:
			std::cout << "Thursday" << std::endl;
			break;
		case 53:
			std::cout << "Friday" << std::endl;
			break;
		case 54:
			std::cout << "Saturday" << std::endl;
			break;
		default:
			printf("Not Valid Option\n");
			break;
	}
	return 0;
}
