#include<bits/stdc++.h>

int main() {
	char num[10];
	std::cout << "Enter num : ";
	std::cin.getline(num, sizeof(num));
	int len = strlen(num);;
	int temp = 0, sum = 0;
	for(int i = 0; i < strlen(num); i++) {
		temp = temp * 10 + num[i] - 48;
		sum += pow(num[i] - 48, i + 1);
	}
	if(sum == temp)
		std::cout << "Disarium num";
}
