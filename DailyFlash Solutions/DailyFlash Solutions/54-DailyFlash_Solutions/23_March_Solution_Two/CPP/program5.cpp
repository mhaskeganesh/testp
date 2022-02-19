
#include <iostream>
#include <math.h>
#include <stdlib.h>

int main () {
	int n,t,choice;
	char ch;
	float sum = 0,var = 0;
	std::cout << ("Total Number : ");
	std::cin >> t;
	int *arr = new int[t];

	std::cout << ("Enter Numbers : ");
	for(int i = 1; i <= t; i++) {
		std::cin >> n;
		arr[i] = n;
		sum = sum + n;
	}
	sum = sum / t;
	for(int i = 0; i< t; i++){
		var = var + pow(arr[i] - (int)(sum),2);	
	}
	std::cout << "1: Average\n";
	std::cout << "2: variance\n";
	std::cout << "3: Standard Deviation\n";
	std::cout << "Enter choice\n";
	do {
		std::cin >> choice;
		switch(choice){
			case 1:
				std::cout << "Average : " << sum << "\n";
				break;
			case 2:
				var = var/t;
				std::cout << ("Variance = ") << (var) << std::endl;
				break;
			case 3:
				std::cout << ("standard Deviation = ") << sqrt(var) << std::endl;
				break;
			default:
				printf("Wrong Choice\n");
		}
		std::cout << "Do  you want to continue : ";
		std::cin >> ch;
	
	}while(ch =='y');
}
