/*
 
Program 1: Write a Program to check whether the Character is Alphabet or not.
Input: v
Output: v is an alphabet.


 */

#include<iostream>

int main(){

	char ch = '*';
	
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		std::cout<<ch<<"  is alphabet";
	else
		std::cout<<ch<<" is not alphabet";	

}	
