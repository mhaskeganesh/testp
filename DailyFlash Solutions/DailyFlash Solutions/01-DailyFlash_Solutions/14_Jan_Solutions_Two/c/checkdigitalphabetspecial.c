/*
Program 3: Write a Program to Find whether the character is an alphabet, a
digit or a special character
Input: *
Output: * is a Special Character.
*/


#include<stdio.h>

void main(){
	
	char ch= '@';

	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		printf("%c is a alphabet",ch);
	else if(ch>=48&&ch<=57)
		printf("%c is digit ",ch);
	else
		printf("%c is special character",ch);	


}	
