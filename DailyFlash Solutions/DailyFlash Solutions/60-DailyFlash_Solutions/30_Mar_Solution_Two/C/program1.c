
#include <stdio.h>

int fact(int n){

	if(n==0){
		return  1;
	}
	return n*fact(n-1);
}
void main () {
	int n, x, y;
	float mul = 0;
	printf("Enter length : ");
	scanf("%d", &n);
	int cnt = 1,k;
	while(cnt <= n){
		mul = mul + 1.0f/fact(cnt);
		cnt++;
	}
	printf("%f\n",mul);
}
