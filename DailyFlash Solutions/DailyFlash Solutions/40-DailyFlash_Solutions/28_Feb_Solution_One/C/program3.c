
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	if(n < 0)
		return;
	int min1 = 10;
	int min2 = 10;
	while(n != 0){
		if(min1 > n % 10){
			min2 = min1;
			min1 = n % 10;
		}
		else if(min2 > n % 10) {
			min2 = n % 10;
		}
		n = n /10;
	}
	if(min2 != min1 && min2 != 10)
		printf("Second Min Digit : %d\n", min2);
	else
		printf("Only one Digit or all are same digit\n");

}
