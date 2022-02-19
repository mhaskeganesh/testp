#include<iostream>

int main() {
	int n;
	std::cout<<"Input : ";
	std::cin>>n;
	n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12 ? std::cout<<"31 days":n!=2 && n>0&&n<=12?std::cout<<"30 days":n==2 ? std::cout<<"28 or 29 days":std::cout<<"Enter valid month"; 
	return 0;
}
