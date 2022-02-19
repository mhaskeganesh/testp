
#include <iostream>

int fact(int n){

	if(n==0){
		return  1;
	}
	return n*fact(n-1);
}
int main () {
	int n, x, y;
	float mul = 0;
	std::cout << ("Enter length : ");
	std::cin >> n;
	int cnt = 1,k;
	while(cnt <= n){
		mul = mul + 1.0f/fact(cnt);
		cnt++;
	}
	std::cout << (mul) << "\n";
}
