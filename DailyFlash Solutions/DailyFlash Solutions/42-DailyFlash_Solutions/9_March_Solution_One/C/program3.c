
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : \n");
	while(1){
		scanf("%d", &n);
		if(n < 0) {
			printf("negative Number\n");
			break;
		}
		printf("Square of %d : %d\n", n, n*n);
	}
}
