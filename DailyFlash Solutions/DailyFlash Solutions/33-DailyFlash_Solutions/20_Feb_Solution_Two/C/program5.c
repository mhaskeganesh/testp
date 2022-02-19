
#include <stdio.h>

void main () {
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	int flag = 0, sum = 0;
	while(n != 0){
		sum = 0;
		for(int i = 1; i< n%10; i++){
			if((n%10)%i == 0){
				sum = sum + i;
			}		
		}
		if(sum == n%10){
			flag = 1;
			printf("%d ", n%10);
		}
		n = n / 10;
	}
	if(flag == 0){
		printf("Does not contain any perfect digit\n");
	}
	else{
		printf("\n");
	}

}
