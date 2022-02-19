
#include <iostream>

main() {

	int a, b, c;
	std::cout << ("Enter angles of triangle in Degree : \n");
	std::cin >> a >> b >> c;

	if(a +  b + c == 180){
		std::cout << ("Valid triangle") << std::endl;
	}
	else{
		std::cout << ("Not Valid triangle") << std::endl;
	}
}
