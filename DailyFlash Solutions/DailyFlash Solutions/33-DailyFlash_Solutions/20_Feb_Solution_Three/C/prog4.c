#include<stdio.h>

int main(void) {
	int num, temp, k;
	char bin[3];
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(j >= i) {
				num = j + i;
				k = 0;
				bin[0] = '\0';
				bin[1] = '\0';
				bin[2] = '0';
				while(num != 0) {
					bin[2 - k] = num % 2 + '0';
					num /= 2;
					k++;
				}
				for(int h = 0; h < 3; h++) {
					if(bin[h] != '\0')
						printf("%c", bin[h]);
				}
				printf("\t");
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
}
