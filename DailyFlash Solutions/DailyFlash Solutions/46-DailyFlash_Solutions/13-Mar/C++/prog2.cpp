#include<iostream>
#include<string.h>
int main() {
	char num[10];
	printf("Enter num : ");
	std::cin.getline(num, sizeof(num));
	for(int i = 0; i < strlen(num); i++) {
		if(num[i] == '1')
			num[i] = '2';
	}
	std::cout << num;
}
