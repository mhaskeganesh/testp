#include<iostream>

int main() {
	char ch;
	std::cout<<"Input : ";
	std::cin>>ch;
	ch>='A' && ch<='Z' || ch>='a' && ch<='z'?std::cout<<"Output : Aplhabet":ch>=48 && ch<=57?std::cout<<"Output : Digit":ch>=33 && ch<=47 || ch>=58 && ch<=64?std::cout<<"Output : Special character":std::cout<<"Output : Other";
	return 0;
}
