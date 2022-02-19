
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	if(n < 0)
		return;
	int max = n%10;
	while(n != 0){
		if(max < n % 10 ){
			max = n % 10;
		}
		n = n /10;
	}
	printf("max : %d\n", max);
}
