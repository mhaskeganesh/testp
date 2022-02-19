#include <iostream>
int  main() {

	int n;
	std::cout << ("Enter Radius :");
	std::cin >> n;
	if(n<0){
		std::cout << ("Radius cannot be negative\n");
		exit(0);
	}
	std::cout << ("Circumference : ") << (2*3.142*n) << "cm\n";
}
