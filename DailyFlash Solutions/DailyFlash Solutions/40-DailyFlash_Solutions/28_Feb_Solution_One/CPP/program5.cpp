
#include <iostream>
#include <math.h>

int  main() {

	float x1,y1, x2, y2;
	std::cout << ("1st point  : \n");
	std::cin >> x1 >> y1;
	std::cout << ("2nd point  : \n");
	std::cin >> x2 >> y2;
	float dis = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
	std::cout << ("Distance of line  :") <<  dis << std::endl;
}
