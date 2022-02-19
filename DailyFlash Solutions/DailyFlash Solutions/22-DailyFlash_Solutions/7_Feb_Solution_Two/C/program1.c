
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : ");
	scanf("%d", &n);

	for(int i = 2; i<=n/2; i++){
		if(n%i == 0){
			printf("Number is not prime\n");
			return;
		}
	}
	printf("Number is prime\n");
}
