/*
Program 3: Write a Program to Find whether the character is an alphabet, a
digit or a special character
Input: *
Output: * is a Special Character.
*/


#include<iostream>

int main(){
	
	char ch= '@';

	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		std::cout<<ch<<"  is alphabet";
	else if(ch>=48&&ch<=57)
		std::cout<<ch<<" is digit";
	else
		std::cout<<ch<<" is special character";	


}	
