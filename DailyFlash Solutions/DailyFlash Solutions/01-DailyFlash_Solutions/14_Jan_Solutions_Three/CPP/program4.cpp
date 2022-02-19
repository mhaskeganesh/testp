
#include <iostream>

main() {

	int a;
	std::cout <<(" Enter Positive Size : ") << std::endl;
	std::cin >> a;

	if(a > 0) {
		for(int i = 1; i <= a*a; i++ ){
			if(i % a == 0){
				std::cout << ("1") << std::endl;
			}
			else{
				std::cout <<("1 ");
			}
		}
	}
	else {
		exit(0);
	}
	return 0;
}
