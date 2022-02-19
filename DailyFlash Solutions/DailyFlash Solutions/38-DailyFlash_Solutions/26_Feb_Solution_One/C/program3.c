
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	if(n < 0)
		return;
	int min = n%10;
	while(n != 0){
		if(min > n % 10 ){
			min = n % 10;
		}
		n = n /10;
	}
	printf("min : %d\n", min);
}
