
#include <iostream>

int  main() {

	int n, k;
	char a = 'E', b = 'a';
	std::cout << ("Enter Number :");
	std::cin >> n;
	for(int i = 0; i < n*2; i+=2){
		k = i;
		for(int j = 0; j < n*2; j+=2){
			if(j < i){
				std::cout << ("\t");
			}
			else{
				char bin[4] = {'\0'};
				int m = 3, n = k;
				while(m>=0) {
					bin[m] = (n % 2) + 48;
					n = n / 2;
					m--;
				}
				std::cout << (bin) << "\t";
				k++;
			}
		}
		std::cout << ("\n");
	}
}
