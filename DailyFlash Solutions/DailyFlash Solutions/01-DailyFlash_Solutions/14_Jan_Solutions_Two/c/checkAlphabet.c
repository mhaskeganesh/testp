/*
 
Program 1: Write a Program to check whether the Character is Alphabet or not.
Input: v
Output: v is an alphabet.


 */

#include<stdio.h>

void main(){

	char ch = '*';
	
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		printf("%c is an alphabet",ch);
	else
		printf("%c is not an alphabet",ch);	

}	
