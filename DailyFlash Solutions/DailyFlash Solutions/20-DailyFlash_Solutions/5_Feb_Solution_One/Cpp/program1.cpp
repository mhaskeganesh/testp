
#include<iostream>


int main(){
	
	int a=0,b=1,c;


	printf("Febonacci series : ");
	printf("%d\t",a);
	printf("%d\t",b);

	for(int i=0;i<3;i++){
		
		c = a+b;
		printf("%d\t",c);

		a=b;
		b=c;
	}	




}	
