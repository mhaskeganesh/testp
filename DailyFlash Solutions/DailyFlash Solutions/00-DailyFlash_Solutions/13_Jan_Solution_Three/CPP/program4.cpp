
#include <iostream>
#include <stdlib.h>

//void exit(int);

int fun(int a) { 
	for(int i = 1; i <= a*a; i++ ){
		if(i % a == 0){
			std::cout << ("*\n");
		}
		else{
			std::cout << ("* ");
		}
	}
	return 0;
}

main() {

	int a;
	std :: cout << ("Enter Number : \n");
        std::cin >> (a);
	
	if(a > 0){
		fun(a);
	}
	else {
		std::cout << "Not Allowed" << std::endl;
	}
	return 0;
}
