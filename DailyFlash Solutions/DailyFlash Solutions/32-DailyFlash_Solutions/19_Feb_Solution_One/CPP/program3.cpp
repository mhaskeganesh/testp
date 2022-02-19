
#include <iostream>

int  main() {

	int n;
	std::cout << ("Enter Circumference of Circle :");
	std::cin >> n;
	if(n<0){
		std::cout << ("Circumference cannot be negative\n");
		exit(0);
	}
	std::cout << ("radius : ") << n/(2*3.142) << std::endl;
}
