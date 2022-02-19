
#include <iostream>
#include <stdlib.h>
int main() {
	int n;
	printf("Enter length  of Array : ");
	scanf("%d", &n);
	int *arr = new int[n];
	std::cin >> arr[0];
	int max = arr[0];
	for(int i =  1; i < n ; i++){
		std::cin >> arr[i];
		if(max < arr[i])
			max = arr[i];
	}
	std::cout << "Max : " << max << "\n";
}
