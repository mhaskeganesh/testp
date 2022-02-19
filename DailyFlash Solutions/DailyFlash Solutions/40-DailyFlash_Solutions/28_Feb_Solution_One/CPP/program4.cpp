
#include <iostream>

int  main() {

	int n = 4;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	if(n < 0)
		return 0;
	int j;
	for(int i = 0; i < n;i++){
		for(j = 0; j < n - i;j++){
			std::cout << (i+j) << char(j+65) << "\t";
		}
		std::cout << ("\n");
	}
}
