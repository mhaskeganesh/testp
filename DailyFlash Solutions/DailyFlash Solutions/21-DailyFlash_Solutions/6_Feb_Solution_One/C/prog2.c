#include<stdio.h>

int main(void) {
	char bin[10];
	for(int i = 0; i < 10; i++) {
		bin[i] = '\0';
	}
	int dec;
	printf("Enter decimal num : ");
	scanf("%d", &dec);
	int i = 0, quo, rem;
	while(1) {
		quo = dec / 2;
		rem = dec % 2;
		dec = quo;
		if(rem == 1) {
			bin[i] = '1';
		} else if(rem == 0) {
			bin[i] = '0';
		}
		i++;
		if(quo == 0)
			break;
	}
	for(int i = 9; i >= 0; i--) {
		if(bin[i] != '\0')
			printf("%c", bin[i]);
	}
	return 0;
}
