
#include <stdio.h>
int isPrime(int n) {

	for(int i = 2; i <= n/2; i++){
		if(n%i == 0)
			return 0;
	}	
	return 1;
}
void main () {
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	printf("Prima Factors are : ");
	for(int i = 2; i<= n/2; i++){
		if(n%i == 0)
			if(isPrime(i)){
				printf("%d ", i);	
			}
	}
	printf("\n");
}
