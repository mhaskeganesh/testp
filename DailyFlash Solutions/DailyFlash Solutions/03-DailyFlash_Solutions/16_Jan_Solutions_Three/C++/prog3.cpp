#include<iostream>

int main() {
	int year;
	std::cout<<"Input : ";
	std::cin>>year;
	year>0 && year%100==0 ? year%400==0 ? std::cout<<"Leap year" : std::cout<<"Not a leap year" : year>=0 && year%4==0 ? std::cout<<"Leap year" : std::cout<<"Not a leap year";
	return 0;
}
