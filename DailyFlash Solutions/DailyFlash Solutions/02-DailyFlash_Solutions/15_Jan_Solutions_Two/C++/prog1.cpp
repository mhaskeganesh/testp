#include<iostream>

int main() {
	char ch;
	std::cout<<"Input : ";
	std::cin>>ch;
	ch>='A' && ch<='Z'?std::cout<<"Output : Uppercase":ch>='a' && ch<='z'?std::cout<<"Output : Lowercase":std::cout<<"Output : None";
	return 0;
}
