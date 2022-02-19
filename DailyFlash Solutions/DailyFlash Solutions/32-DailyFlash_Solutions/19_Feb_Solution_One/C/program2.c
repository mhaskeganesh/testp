
#include <stdio.h>

void  main() {
	int n, temp, i = 0;
	char bin[5] = {'0', '0', '0','0', '\0'};
	printf("Enter Number :");
	scanf("%d", &n);
	while(n!=0) {
		temp = n%10;
		i = 3;
		while(i>=0) {
			bin[i] = (temp % 2) + 48;
			temp = temp / 2;
			i--;
		}
		printf("Binary of %d : %s\n", n%10, bin);
		n = n/10;
	}
}
