#include<iostream>

int main() {
	int n1;
	std::cout<<"Input : ";
	std::cin>>n1;
	n1%5==0 && n1%11==0?std::cout<<"Output : Divisible":std::cout<<"Output : Not divisible";
	return 0;
}
