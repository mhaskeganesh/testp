#include<stdio.h>

int main(void) {
	int num;
	for(int i = 0; i < 5; i++) {
		num = i * i;
		for(int j = 0; j < 5; j++) {
			if(j >= i) {
				printf("%d\t", num);
				num += i;
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
}
