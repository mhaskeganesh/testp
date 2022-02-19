
#include <stdio.h>
#include <math.h>

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
	printf("Enter x and y : ");
	scanf("%d%d", &x, &y);
	int cnt = 1,k;
	while(cnt <= n){
		mul = mul + 1/(float)(pow((x+y),cnt)*fact(cnt));
		cnt++;
	}
	printf("%f\n",mul);
}
