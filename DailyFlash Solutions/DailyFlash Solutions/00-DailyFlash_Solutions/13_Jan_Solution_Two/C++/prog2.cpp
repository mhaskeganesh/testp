#include<iostream>

int main() {
	int n1;
	std::cout<<"Input : ";
	std::cin>>n1;
	n1<0?std::cout<<"Output : Negative":n1==0?std::cout<<"Output : Zero":std::cout<<"Output : Positive";
	return 0;
}
