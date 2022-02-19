
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, k = 1;
	printf("Enter Size : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = n; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			printf("%d\t",7 * k);
			k++;
		}
		printf("\n");
	}
}
