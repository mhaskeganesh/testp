#include <iostream>
#include <math.h>

int  main() {

	float x1,y1, x2, y2, x3, y3;
	std::cout << ("1st point(A)  : \n");
	std::cin >> x1 >> y1;
	std::cout << ("2nd point(B)  : \n");
	std::cin >> x2 >> y2;
	std::cout << ("3rd point(C)  : \n");
	std::cin >> x3 >> y3;
	float ab = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
	float bc = sqrt(pow(x2-x3, 2) + pow(y2-y3,2));
	float ac = sqrt(pow(x3-x1, 2) + pow(y3-y1,2));
	std::cout << ("Distance of line AB : ") << (ab) << std::endl;
	std::cout << ("Distance of line BC : ") << (bc) << std::endl;
	std::cout << ("Distance of line AC : ") << (ac) << std::endl;
	std::cout << ("Perimeter of Triangle : ") << (ac + ab + bc) << std::endl;
	float p = (ab + bc + ac) / 2;
	std::cout << ("Semi-Perimeter of Triangle : ") << p << std::endl;
	float area = (sqrt(p*(p-ab)*(p-bc)*(p-ac)));
	std::cout << ("Area of Triangle : ") << area << std::endl;
	std::cout << ("Radius of In-Circle : ") << area/p << std::endl;
}
