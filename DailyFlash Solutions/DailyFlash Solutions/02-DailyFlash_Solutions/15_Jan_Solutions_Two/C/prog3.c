#include<stdio.h>

int main() {
	int n;
	printf("Input : ");
	scanf("%d", &n);
	n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12 ? printf("31 days"):n!=2 && n>0&&n<=12?printf("30 days"):n==2 ? printf("28 or 29 days"):printf("Enter valid month"); 
	return 0;
}
