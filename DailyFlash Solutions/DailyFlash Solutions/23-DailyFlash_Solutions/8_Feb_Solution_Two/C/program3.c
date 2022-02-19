
#include <stdio.h>

void main () {
	int sum = 0;
	for(int j = 1; j <= 100; j++){
		sum = 0;
		for(int i = 1; i <= j/2; i++){
			if(j % i == 0){
				sum = sum + i;
			}
		}
		if(sum == j)
			continue;
		else
			printf("%d ", j);
	}
	printf("\n");
}
