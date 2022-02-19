
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	int rev = 0;
	while(n != 0) {
		rev = rev * 10 + n%10;
		n /= 10;
	}
	n = rev;
	while(n != 0) {
		switch(n%10){
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
			case 0:
				printf("Zero ");
				break;
			default:
				break;
		}
		n /= 10;
	}
	printf("\n");
}
