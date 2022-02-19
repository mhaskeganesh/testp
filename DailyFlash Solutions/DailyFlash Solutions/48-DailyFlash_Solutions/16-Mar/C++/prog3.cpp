#include<iostream>

int isPalindrome(int num) {
	int rev = 0, temp = num;
	
	while(temp != 0) {
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	if(rev == num)
		return 1;
	return 0;
}	
int main() {
	int num, f = 0;
	do {
		if(f != 0)
			std::cout << num << "\n";	
		std::cin >> num;
		f = 1;
	} while(isPalindrome(num) != 1);
}
