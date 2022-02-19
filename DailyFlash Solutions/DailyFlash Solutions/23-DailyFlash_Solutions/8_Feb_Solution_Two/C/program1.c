
#include <stdio.h>

void main () {
	int n, sum = 0;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
			sum = sum + i;
		}
	}
	if(sum > n){
		printf("Number is Abundant\n");
	}
	else
		printf("Number is Not Abundant\n");
}
