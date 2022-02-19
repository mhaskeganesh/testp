
#include <iostream>
#include <math.h>

int main () {

	float len;
	std::cout << ("Enter length in metre\n");
	std::cin >> len;

	float per = 2*3.142/sqrt(len/9.81);
	float fre = 1/per;
	std::cout << ("Period of that pendulum is :") << per << "seconds\n";
	std::cout << ("Frequency of that pendulum is :") << fre << "seconds\n";
	
	return 0;
}
