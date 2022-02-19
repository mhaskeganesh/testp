
#include <iostream>

int main () {
	int n, flag;
	std::cout << ("Enter Limit : ");
	std::cin >> n;

	for(int i = 1; i < 2*n; i++){
		flag = 1;
		for(int j = 1; j < 2*n; j++){
			if(i <= n && j > (n-i) && j < (n+i)){
				if(flag == 1){
					std::cout << ("1\t");
					flag = 0;
				}
				else{
					std::cout << ("\t");
					flag = 1;
				}
			}
			else if(i>n && j > (i-n)  && j < (2*n-(i-n))){
				if(flag == 1){
					std::cout << ("1\t");
					flag = 0;
				}
				else{
					std::cout << ("\t");
					flag = 1;
				}
			}
			else {
				std::cout << ("\t");
			}
		}
		std::cout << ("\n");
	}
}
