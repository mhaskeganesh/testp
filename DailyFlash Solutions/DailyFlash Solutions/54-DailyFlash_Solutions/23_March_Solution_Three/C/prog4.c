#include<stdio.h>

int main() {
	int temp = 5;
	for(int i = 0; i < 4; i++) {
		if(i > 0) {
			temp = temp + (i - 1) * 2 + 1;
		}
		int num = temp;
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				printf("\t");
			} else {
				printf("%d\t",num);
				num += i;
			}
		}
		printf("\n");
	}
}
