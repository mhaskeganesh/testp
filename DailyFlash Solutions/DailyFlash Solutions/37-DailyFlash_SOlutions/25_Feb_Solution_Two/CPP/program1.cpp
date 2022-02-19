
#include <iostream>

int main () {
	int temp, sum = 0, u, l;
	std::cout << ("Enter Lower : ");
	std::cin >> l;	
	std::cout << ("Enter upper : ");
	std::cin >> u;	
	for(int i = l; i <= u; i++){
		temp = i;
		sum = 0;
		while(temp != 0){
			sum += temp%10;
			temp = temp / 10;
		}
		if(i % sum == 0){
			std::cout << (i) << " ";
		}
	}
	std::cout << ("\n");
	
}
