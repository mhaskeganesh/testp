#include<iostream>

int main() {
	char ch;
	std::cout<<"Input : ";
	std::cin>>ch;
	ch>='A' && ch<='Z' || ch>='a' && ch<='z'?std::cout<<"Output : Aplhabet":std::cout<<"Output : Not alphabet";
	return 0;
}
