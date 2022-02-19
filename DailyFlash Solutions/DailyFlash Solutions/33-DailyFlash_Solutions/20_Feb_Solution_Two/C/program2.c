
#include <stdio.h>

void  main() {
	int n, temp, i = 0;
	printf("Enter Number :");
	scanf("%d", &n);
	while(n!=0) {
		temp = n%10;
		i = 3;
		char bin[4] = {'\0'};
		while(i>=0) {
			bin[i] = (temp % 16) + 48;
			temp = temp / 16;
			i--;
		}
		printf("Binary of %d : %s\n", n%10, bin);
		n = n/10;
	}
}
