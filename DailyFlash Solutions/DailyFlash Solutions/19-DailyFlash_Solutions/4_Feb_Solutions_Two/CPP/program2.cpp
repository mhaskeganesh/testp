
#include <iostream>
#include<math.h>

int main () {

	long n;
	int k, d = 0;
	std::cout << ("Enter Binary Number : ");
	std::cin >> n;


	int i = 0;
	while(n != 0){
		if(n%10 != 1 && n%10 != 0)
			exit(0);
		d = d + (n % 10) * pow(2,i);
		n = n / 10;
		i++;
	}

	std::cout << (d) << std::endl;
}
