
#include <iostream>
#include <stdlib.h>
int main() {
	int n, fact = 1;
	std::cout << ("Enter length  of Array : ");
	std::cin >> n;
	int *arr = (int *)malloc(4*n);
	std::cin >> arr[0];
	for(int i =  1; i < n ; i++){
		std::cin >> arr[i];
	}
	std::cout << ("\n");
	for(int i =  0; i < n ; i++){
		if(arr[i] % 2 == 1 ){
			arr[i] = arr[i]*arr[i]*arr[i];
		}
		else
			arr[i] = arr[i]*arr[i];
	}
	for(int i =  0; i < n ; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
