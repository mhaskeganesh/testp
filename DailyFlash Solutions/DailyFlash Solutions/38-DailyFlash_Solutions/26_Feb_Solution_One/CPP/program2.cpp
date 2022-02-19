
#include <iostream>
#include <math.h>

int main() {
	float n;
	float g1, g2, e;
	for(n = 200.0f; n <= 400.0f; n++){
		g1 = (float)(n / 2);
		e = 0.1f;
		while((float)(fabs(g1*g1 - n)) > e){
			g2 = (float)(n / g1);
			g1 = (float)((g1 + g2 )/2);
		}
		std::cout << ("Square root of " ) << n << " : " << g1 << std::endl;
	}
}

