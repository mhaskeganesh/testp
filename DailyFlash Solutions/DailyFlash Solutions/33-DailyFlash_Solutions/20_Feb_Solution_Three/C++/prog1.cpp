#include<bits/stdc++.h>
int main(void) {

	double r, th;
	std::cout << "Enter radius : ";
	std::cin >> r;
	std::cout << "Enter angle : ";
	std::cin >> th;
	std::cout << "x : " << r * cos(th) << "\ny : " << r * sin(th);
	return 0;
}	
