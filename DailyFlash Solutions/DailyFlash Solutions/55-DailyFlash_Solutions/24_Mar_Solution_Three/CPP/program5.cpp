
#include <iostream>
#include <math.h>
#define pie 3.142

int main () {
	int b, h;
	float area;
	std::cout << ("Enter height and base\n");
	std::cin >> h;
	std::cin >> b;
	area = 0.5 * b * h;
	std::cout << ("Area : ") << (area) << "\n";
}
