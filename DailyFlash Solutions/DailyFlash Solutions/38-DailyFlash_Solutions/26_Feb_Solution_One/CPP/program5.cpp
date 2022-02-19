
#include <iostream>

int  main() {

	float x1,y1, x2, y2;
	std::cout << ("1st point  : \n");
	std::cin >> x1 >> y1;
	std::cout << ("2nd point  : \n");
	std::cin >> x2 >> y2;
	std::cout << ("Mid point : ( " ) << (x1 + x2)/2 << " , "<< (y1+y2)/2 << ")\n";
}
