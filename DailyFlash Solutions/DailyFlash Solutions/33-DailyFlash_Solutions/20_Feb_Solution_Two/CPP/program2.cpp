
#include <iostream>

int  main() {
	int n, temp, i = 0;
	std::cout << ("Enter Number :");
	std::cin >> n;
	while(n!=0) {
		temp = n%10;
		i = 3;
		char bin[4] = {'\0'};
		while(i>=0) {
			bin[i] = (temp % 16) + 48;
			temp = temp / 16;
			i--;
		}
		std::cout << ("Binary of " ) << n%10 << " : "<< (bin) << "\n";
		n = n/10;
	}
}
