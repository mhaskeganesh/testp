
#include <iostream>

int main () {

	char p[10] = {'\0'};
	int n = 0;
	std::cout << ("Enter Decimal Number : ");
	std::cin >> n;
	if(n<0)
		exit(0);
	int i = 0;
	while(n != 0){
		p[i] = (char)(n%8 + 48);
		n = n/8;
		i++;
	}	
	i--;
	while(i >= 0){
		std::cout << (p[i]);
		i--;
	}
	std::cout << ("\n");
}

