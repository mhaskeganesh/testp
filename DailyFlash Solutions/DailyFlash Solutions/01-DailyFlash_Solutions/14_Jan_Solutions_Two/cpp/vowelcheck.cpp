/*
Program 2: Write a Program to check whether the Character is Vowel or
Consonant.
Input: E
Output: E is a Vowel.
*/

#include<iostream>

int main(){
	
	char ch = 'E';

	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			std::cout<<ch<<"  is  vowel";
			break;
		default :
			printf("%c is consonant",ch);	
	}	
}	
