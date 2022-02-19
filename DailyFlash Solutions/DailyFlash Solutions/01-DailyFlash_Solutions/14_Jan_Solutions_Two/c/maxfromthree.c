/*
 *
Program 5: Write a Program to Find Maximum between three numbers
Input: 1 4 2
Output: 4 is Max number among 1, 4 & 2


*/


#include<stdio.h>

void main(){

	int a=1000,b=200,c=3000;

	if(a>b && a>c){

		printf("a = %d is greater than b = %d and c = %d",a,b,c);
	}else if(b>a && b>c){
		printf("b = %d is greater than a = %d  and c = %d",b,a,c);
	}else if(c>a && c>b){
		printf("c = %d is greater than a = %d  and b = %d",c,a,b);

	}
}
