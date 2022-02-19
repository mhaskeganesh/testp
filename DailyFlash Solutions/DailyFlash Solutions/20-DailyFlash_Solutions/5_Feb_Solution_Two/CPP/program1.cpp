
#include<iostream>

int main() {
	
	int n, a = 0, b = 1, c;
	std::cout << ("Enter Limit : ");
	std::cin >> n;

	if(n<=0)
		exit(0);
	else if(n == 1)
		std::cout << ("0");
	else if(n == 2)
		std::cout << ("0 1");
	else {
		c = a + b;
		std::cout << ("0 1 ");
		for(int i = 3; i <= n; i++){
			std::cout << c << " ";
			a = b;
			b = c;
			c = a + b;
		}
		std::cout << ("\n");
	}
}
