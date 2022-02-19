
#include <iostream>
#include <math.h>

int main () {
	int x1, y1, x2, y2, x3, y3;
	std::cout << ("Enter A ");
	std::cin >> x1 >> y1;
	std::cout << ("Enter B ");
	std::cin >> x2 >> y2;
	std::cout << ("Enter C ");
	std::cin >> x3 >> y3;

	float ab = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	float bc = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
	float ac = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
	
	float s = (ab + bc + ac)/2;
	float area = sqrt(s *(s-ab)*(s-bc)*(s-ac));
	std::cout << ("Height : ") << ((2*area)/ab) << "\n";
}
