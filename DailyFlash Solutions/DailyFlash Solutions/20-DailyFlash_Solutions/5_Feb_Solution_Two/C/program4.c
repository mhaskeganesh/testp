
#include <stdio.h>

int main () {
	
	int n, k = 97;
	printf("Enter Size : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= n-i ; j++){
			printf("%c\t", (k + j));
		}
		k = k + 2;
		printf("\n");
	}	

}
