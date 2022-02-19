#include<iostream>

int main() {
	int n1, n2, n3;
	std::cout<<"Input : ";
	std::cin>>n1>>n2>>n3;
	n1>=0 && n2>=0 && n3>=0 && n1+n2+n3 == 180?std::cout<<"Output : Valid":std::cout<<"Output : Invalid";
	return 0;
}
