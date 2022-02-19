#include <iostream>

main() {

	int a;
	std::cout << ("Enter Number : ") << std::endl;
	std::cin >> a;
		
	if(a < 0)
		exit(0);
	
	int k = 1;
	for(int i = 1; i <= a*a; i++ ){
		if(i % a == 0){
			std::cout << k << std::endl;
			k = 1;
		}
		else{
			std::cout << k << "\t";
			k++;
		}
	}
	return 0;
}
