
#include <iostream>

int main () {

	int n, k = 1;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= (n - i)*2; j=j+2){
			std::cout << 7 * k << "\t";
			k++;
		}
		std::cout << ("\n");
	}
}
