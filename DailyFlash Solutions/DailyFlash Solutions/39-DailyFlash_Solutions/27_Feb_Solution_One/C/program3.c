
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	if(n < 0)
		return;
	int max1 = n%10;
	int max2 = max1;
	int flag = 0, k = 0;
	while(n != 0){
		if(max1 <= n % 10){
			max2 = max1;
			max1 = n % 10;
			k++;
		}
		else if((max2 < n % 10) || (flag == 0 && k != 2)) {
			max2 = n % 10;
			flag = -1;
			k = 0;
		}
		n = n /10;
	}
	if(max2 != max1)
		printf("Second Max Digit : %d\n", max2);
	else
		printf("Only one Digit or all are same digit\n");

}
