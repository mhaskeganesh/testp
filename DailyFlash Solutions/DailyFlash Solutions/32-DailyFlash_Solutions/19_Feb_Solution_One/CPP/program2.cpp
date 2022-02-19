
#include <iostream>

int  main() {
	int n, temp, i = 0;
	char bin[5] = {'0', '0', '0','0', '\0'};
	std::cout << ("Enter Number :");
	std::cin >> n;
	while(n!=0) {
		temp = n%10;
		i = 3;
		while(i>=0) {
			bin[i] = (temp % 2) + 48;
			temp = temp / 2;
			i--;
		}
		std::cout << ("Binary of ") << n%10 << " = " << bin << std::endl;
		n = n/10;
	}
}
