
#include <iostream>

main() {

	int a;
	std::cout << ("Enter Number : \n");
	std::cin >> a;

	if(a > 0){ 
		std::cout << "Number is Positive" << std::endl;
	} 
	else if  (a == 0){
		std::cout << "Number is equal to zero" << std::endl;
	}
	else{
		std::cout << "Number is Negative" << std::endl;
	}
	return 0;
}
