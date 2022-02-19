
#include <iostream>
#include <math.h>

int main() {
	float n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	float g1, g2, e;
	g1 = (float)(n / 2);
	e = 0.1f;
	while((float)(fabs(g1*g1 - n)) > e){
		g2 = (float)(n / g1);
		g1 = (float)((g1 + g2 )/2);
	}
	std::cout << ("Square root : ") << g1 << std::endl;
}

