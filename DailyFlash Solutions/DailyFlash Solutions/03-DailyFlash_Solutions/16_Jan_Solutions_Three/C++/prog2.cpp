#include<iostream>

int main() {
	int p, n;
	float r;
	std::cout<<"Input : ";
	std::cin>>p>>r>>n;
	p>=0 && r>=0 && n>=0 ? std::cout<<p * r * n/100:std::cout<<"Enter valid input";
	return 0;
}
