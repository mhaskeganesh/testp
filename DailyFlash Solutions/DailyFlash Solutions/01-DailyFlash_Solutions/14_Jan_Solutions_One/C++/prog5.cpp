#include<iostream>

int main() {
	int n1, n2, n3;
	std::cout<<"Input : ";
	std::cin>>n1>>n2>>n3;
	n1>n2 && n1>n3 ? std::cout<<"Output : "<<n1:n2>n3 ? std::cout<<"Output : "<<n2:std::cout<<"Output : "<<n3;
	return 0;
}
