
#include <stdio.h>

void main () {
	int temp, sum = 0;
	
	for(int i = 1; i <= 100; i++){
		temp = i;
		sum = 0;
		while(temp != 0){
			sum += temp%10;
			temp = temp / 10;
		}
		if(i % sum == 0){
			printf("%d ",i);
		}
	}
	printf("\n");
	
}
