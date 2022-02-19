
#include <iostream>

int  main() {

	int n = 4;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	if(n < 0)
		return 0;
	int max = n%10;
	while(n != 0){
		if(max < n % 10 ){
			max = n % 10;
		}
		n = n /10;
	}
	std::cout << ("max : ") << max << std::endl;
}
