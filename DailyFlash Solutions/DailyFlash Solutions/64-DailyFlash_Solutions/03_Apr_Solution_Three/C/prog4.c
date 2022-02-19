#include<stdio.h>

int main() {

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			if(i < 3) {
				if(j < 2 - i)
					printf("\t");
				else {
					printf("%d\t", (j + 1) * i * (j + 1) * i);
				}
			} else {
				if(j < i - 2)
					printf("\t");
				else { 	
					printf("%d\t", (j + 1) * i * (j + 1) * i);
				}
			}
		}
		printf("\n");
	}
}
