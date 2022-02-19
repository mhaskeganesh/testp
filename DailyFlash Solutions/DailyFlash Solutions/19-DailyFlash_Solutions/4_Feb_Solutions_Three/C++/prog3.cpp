#include<iostream>

int main(void) {
	float dist;
	std::cout << "Enter dist(ft): ";
	std::cin >> dist;
	if(dist >= 0) {
		std::cout << "Dist(cm) : " << dist * 30;
	} else {
		std::cout << "Enter valid det.";
	}
	return 0;
}
