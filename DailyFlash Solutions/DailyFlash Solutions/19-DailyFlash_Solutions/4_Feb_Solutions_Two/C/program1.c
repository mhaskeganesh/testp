
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, flag = 0;
	printf("Enter Number : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);

	for(int j = 1; j <= n; j++){
		flag = 0;
		for(int i = 2; i <= j/2; i++){
			if(j % i == 0 ){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			printf("%d ", j);
		}
	}
	printf("\n");
}
