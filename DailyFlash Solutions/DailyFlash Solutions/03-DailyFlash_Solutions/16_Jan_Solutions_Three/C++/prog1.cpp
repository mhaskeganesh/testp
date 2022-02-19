#include<iostream>

int main() {
	int n1, n2, n3;
	std::cout<<"Input : ";
	std::cin>>n1>>n2>>n3;
	n1>0 && n2>0 && n3>0 && n1*n1 + n2*n2 == n3*n3 ?std::cout<<"Output : Satisfies pythagoras therom":std::cout<<"Output : Does not satisfies pythagoras therom";
	return 0;
}
