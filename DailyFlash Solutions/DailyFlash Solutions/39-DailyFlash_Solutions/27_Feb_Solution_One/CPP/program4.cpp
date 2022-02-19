
#include <iostream>

int  main() {

	int n = 4;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	if(n < 0)
		return 0;
	char k = 65,j;
	for(int i = 0; i < n;i++){
		for(j = 0; j < n - i;j++){
			std::cout << (k) << "\t";
			k = k +  j + 1;
		}
		k = k - j;
		std::cout << ("\n");
	}
}
