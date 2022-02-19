#include<iostream>

int main() {
	int num = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%d ", num);
			if(j < 3){
				num = num % 4 + 1;
			}
		}
		printf("\n");
	}
}
