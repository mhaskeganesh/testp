
#include <iostream>
#include <math.h>

int main () {

	float len, per;
	std::cout << ("Enter Fre in Hz\n");
	std::cin >> per;
	
	/*float per = (2*3.142)/sqrt(len/9.81);
	std::cout << ("Period of that pendulum is : %f seconds\n", per);
	float fre = 1/per;
	std::cout << ("Frequency of that pendulum is : %f Hz\n", fre);*/
	
	/*float g = (4*3.142*3.142*len)/(per*per);
	std::cout << ("Acceleration of that pendulum is : ") << (g) << " m/sec sq";*/

	len = (4*3.142*3.142*per*per)/(9.81);
	std::cout << ("Length of that pendulum is : ") << len << " m" << std::endl;
	return 0;
}
