
#include <iostream>

int  main() {

	int n = 4;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	if(n < 0)
		return 0;
	int min = n%10;
	while(n != 0){
		if(min > n % 10 ){
			min = n % 10;
		}
		n = n /10;
	}
	std::cout << ("min : ") << min << std::endl;
}
