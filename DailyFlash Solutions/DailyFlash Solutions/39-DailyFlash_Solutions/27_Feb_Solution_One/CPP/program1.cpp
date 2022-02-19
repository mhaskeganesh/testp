
#include <iostream>
int main() {

	int n, rev = 0, l, u;
	std::cout << ("Lower and Upper Bound : ");
	std::cin >> l >> u;

	for(int i = l; i <= u; i++){
		n = i;
		rev = 0;
		while(n != 0){
			rev = rev * 10 + n % 10;
			n = n / 10;
		}
		if(rev == i){
			std::cout << (i) << " ";
		}	
	}
	std::cout << ("\n");
}
