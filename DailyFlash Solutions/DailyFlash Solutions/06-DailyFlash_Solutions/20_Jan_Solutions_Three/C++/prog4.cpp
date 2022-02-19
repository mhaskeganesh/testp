#include<iostream>

int main(void) {
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
	std::cout << "Input : ";
	std::cin >> n0 >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;
	float sum = n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
	float avg = sum / 10;
	std::cout << "Sum " << sum << "\nAvg : " << avg;
	return 0;
}
