/*
 *
Program 5: Write a Program to Find Maximum between three numbers
Input: 1 4 2
Output: 4 is Max number among 1, 4 & 2


*/


#include<iostream>

int main(){

	int a=1000,b=200,c=3000;

	if(a>b && a>c){
		std::cout<<a<<" is greater than "<<b<<" and "<<c;
	}else if(b>a && b>c){
		std::cout<<b<<" is greater than "<<a<<" and "<<c;
	}else if(c>a && c>b){
		
		std::cout<<c<<" is greater than "<<a<<" and "<<b;

	}
}
