#include<stdio.h>

double pow(double,double);

int calculateFactorial(int num){

	int fact =1;
	while(num>0){
		fact *=num;
		num -= 1;
	}

	return fact;
}



void main(){

	int a;
	double res=0;

	printf("Enter the limit : ");
	scanf("%d",&a);


	for(int i=1; i<=a; i++)
		res+=(double)(i)/(calculateFactorial(i));
		

	printf("Result of series is %.2lf\n",res);

}
