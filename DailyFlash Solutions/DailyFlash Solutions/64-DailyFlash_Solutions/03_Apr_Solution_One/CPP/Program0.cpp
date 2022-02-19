#include<stdio.h>
#include<math.h>

int calculateFactorial(int num){

	int fact =1;
	while(num>0){
		fact *=num;
		num -= 1;
	}

	return fact;
}



int main(){

	int a,x,y;
	double res=0;

	printf("Enter the limit : ");
	scanf("%d",&a);
	printf("Enter X: ");
	scanf("%d",&x);
	printf("Enter Y: ");
	scanf("%d",&y);


	for(int i=1; i<=a; i++)
		res+=1/(pow((x+y),i)*(calculateFactorial(i)));
		

	printf("Result of series is %.2lf\n",res);
	return 0;
}
