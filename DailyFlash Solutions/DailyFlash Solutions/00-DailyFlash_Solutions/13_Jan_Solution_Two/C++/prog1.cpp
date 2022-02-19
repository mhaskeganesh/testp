#include<iostream>

int main() {
	int n1, n2;
	std::cout<<"Input : ";
	std::cin>>n1>>n2;
	n1>n2?std::cout<<"Output : "<<n1:n1==n2?std::cout<<"Output : Equal":std::cout<<"Output : "<<n2;
	return 0;
}
