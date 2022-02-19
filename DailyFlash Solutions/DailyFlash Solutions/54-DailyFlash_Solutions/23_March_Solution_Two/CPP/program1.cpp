
#include <iostream>
#include <math.h>

int main () {
	int n;
	float mul;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	
	mul = 1;
	for(int i = 1; i<= n; i++){
		mul = mul+ (float)i / (sqrt(i*(i+1)));
	}
	std::cout << (mul) << std::endl;
}
