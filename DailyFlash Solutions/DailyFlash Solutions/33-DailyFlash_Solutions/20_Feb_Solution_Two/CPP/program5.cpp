
#include <iostream>

int main () {
	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	int flag = 0, sum = 0;
	while(n != 0){
		sum = 0;
		for(int i = 1; i< n%10; i++){
			if((n%10)%i == 0){
				sum = sum + i;
			}		
		}
		if(sum == n%10){
			flag = 1;
			std::cout << (n%10) << " ";
		}
		n = n / 10;
	}
	if(flag == 0){
		std::cout << ("Does not contain any perfect digit\n");
	}
	else{
		std::cout << ("\n");
	}

}
