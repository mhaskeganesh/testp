#include<iostream>
#include<math.h>
int main() {
	int num, n;
	std::cout << "Enter num : ";
	std::cin >> num;
	std::cout << "Enter n : ";
	std::cin >> n;
	int temp = num;
	int cnt = 0;
	while(temp != 0) {
		cnt++;
		if(temp % 10 == 1) {
			num += (n - 1) * pow(10, cnt - 1);	
		}
		temp /= 10;
	}
	std::cout << num;
}
