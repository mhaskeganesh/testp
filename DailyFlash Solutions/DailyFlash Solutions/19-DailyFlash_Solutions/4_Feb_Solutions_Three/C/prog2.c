#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {
	long bin;
	int rem, dec = 0, i = 0;
	printf("Enter binary : ");
	scanf("%ld", &bin);
	while(bin != 0) {
		rem = bin % 10;
		if(!(rem == 0 || rem == 1)) {
			printf("Enter valid bin.");
			exit(1);
		}
		dec = dec + rem * pow(2, i);
		bin /= 10;
		i++;
	}
	printf("Decimal : %d\n", dec);
	return 0;
}
