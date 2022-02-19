
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : \n");
	scanf("%d", &n);
	while(n != 0){
		if(n%10 == 0) {
			printf("Numbers is Duck\n");
			return;
		}
		n = n / 10;
	}
	printf("Number is not Duck Number\n");
}
