
#include <iostream>

int  main() {
	int n, temp, i = 0;
	std::cout << ("Enter Number :");
	std::cin >> n;
	while(n!=0) {
		temp = n%10;
		if(temp >= 8){
			i = 3;
			char bin[4] = {'\0'};
			while(i>=0) {
				bin[i] = (temp % 8) + 48;
				temp = temp / 8;
				i--;
			}
			std::cout << ("octal of " ) << n%10 << " : " << bin << std::endl;
		}
		else{
			std::cout << ("octal of " ) << n%10 << " : 000" << n%10 << std::endl;
		}
		n = n/10;
	}
}
