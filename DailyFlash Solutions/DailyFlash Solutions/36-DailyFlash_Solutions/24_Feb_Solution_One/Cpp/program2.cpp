#include<iostream>


double square(double n , double itr ,double jtr ){
	
	double mid= itr+jtr/2;
	double ans = mid*mid;

	if((ans==n)||abs((ans-n)<0.00001))
		return mid;
	else if(ans<n)
		return square(n,mid,jtr);
	else
		return square(n,itr,mid);
}	



void findSqrt(double num){

	double i =0;

	int flag = 1;

	while(flag){
		
		if(i*i==num){
		
			printf("%5f",i);
			flag = 0;
		}else if(i*i>num){

			double ans = square(num,i-1,i);
			printf("%5f",ans);
			flag = 0;

		
		}	
		i++;

	}	

}	


int main(){

	double num;
	printf("Enter the number : ");
	scanf("%lf",&num);

	findSqrt(num);


}	
