
#include <iostream>

int  main() {

	int n = 4;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	if(n < 0)
		return 0;
	int min1 = 10;
	int min2 = 10;
	while(n != 0){
		if(min1 > n % 10){
			min2 = min1;
			min1 = n % 10;
		}
		else if(min2 > n % 10) {
			min2 = n % 10;
		}
		n = n /10;
	}
	if(min2 != min1 && min2 != 10)
		std::cout << ("Second Min Digit :") << min2 <<"\n";
	else
		std::cout << ("Only one Digit or all are same digit\n");

}
