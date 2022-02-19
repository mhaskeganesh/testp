
#include <iostream>

int main () {
	int n, k = 1, inc = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	k = 6;
	inc = -1;
	int m = 0, l;
	for(int i = n; i >= 1; i--){
		k = k + inc;
		l = k;
		for(int j = 1; j < n+i; j++){
			if(j > n - i){
				std::cout << (l) << "\t";
				l = l + m;
			}
			else
				std::cout << ("\t");
		}
		m++;
		inc = inc + 2;
		std::cout << ("\n");
	}
}	
