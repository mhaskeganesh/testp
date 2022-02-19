
#include <iostream>
#include <math.h>

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
	std::cout << ("Enter x and y : ");
	std::cin >> x >> y;
	int cnt = 1,k;
	while(cnt <= n){
		mul = mul + 1/(float)(pow((x+y),cnt)*fact(cnt));
		cnt++;
	}
	std::cout << (mul) << "\n";
}
