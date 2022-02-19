
#include <iostream>
#include <math.h>
#define pie 3.142

int main () {
	int n;
	float mul = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	float factor = pie / 6;
	int cnt = 0;
	while(cnt != n){
		mul = mul + factor;
		cnt++;
	}
	std::cout << (mul) << "\n";
}
