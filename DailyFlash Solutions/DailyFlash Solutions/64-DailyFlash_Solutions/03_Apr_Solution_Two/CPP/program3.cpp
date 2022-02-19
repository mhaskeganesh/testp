
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n;
	std::cout << ("Enter Length Of Array : ");
	std::cin >> n;

	int *arr1 = new int[n];
	int *arr2 = new int[n];

	std::cout << "Enter array : \n";
	for(int i = 0 ; i < n ; i++ ){
		std::cin >> arr1[i];
	}
	std::cout << "Enter array : \n";
	for(int i = 0 ; i < n ; i++ ){
		std::cin >> arr2[i];
	}

	std::cout << ("Array : \n");
	for(int i = 0 ; i < n ; i++ ){
		arr1[i] = arr1[i] * arr2[i];
		std::cout << (*(arr1+i)) << " ";
	}
	std::cout << ("\n");
}
