
#include <iostream>

int main () {

	int n, flag = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int j = 1; j <= n; j++){
		flag = 0;
		for(int i = 2; i <= j/2; i++){
			if(j % i == 0 ){
				flag = 1;
				break;
			}
		}

		if(flag == 0){
			std::cout << (j) << " ";
		}
	}
	std::cout << std::endl;
}
