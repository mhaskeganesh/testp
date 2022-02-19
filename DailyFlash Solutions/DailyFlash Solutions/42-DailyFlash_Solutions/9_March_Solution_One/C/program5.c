
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : \n");
	while(1){
		scanf("%d", &n);
		if(n%7 == 0) {
			printf("You entererd Number divisible by 7\n");
			break;
		}
	}
}
