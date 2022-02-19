
#include <iostream>
#include <math.h>

int main () {
	
	int n, rev = 0,temp, sum = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	temp = n;
	while(n != 0){
		rev = rev * 10 + n %10;
		n =  n /10;
	}
	n = rev;
	rev = temp;
	temp = 1;
	while(n != 0){
		
		sum = sum + pow(n % 10, temp);
		temp++;
		n = n / 10;
	}
	if(sum == rev)
		std::cout << sum << "is Disarium Number\n";
	else
		std::cout << rev << "is Not Disarium Number\n";
}
