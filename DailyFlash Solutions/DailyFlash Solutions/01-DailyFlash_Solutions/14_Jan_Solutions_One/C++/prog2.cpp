#include<iostream>

int main() {
	char ch;
	std::cout<<"Input : ";
	std::cin>>ch;
	ch=='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'?std::cout<<"Output : Vowel":ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'?std::cout<<"Output : Consonent":std::cout<<"Output : Not a  vowel or consonent";
	return 0;
}
