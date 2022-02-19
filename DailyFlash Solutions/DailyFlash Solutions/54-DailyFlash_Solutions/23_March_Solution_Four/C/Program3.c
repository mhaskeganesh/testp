#include <stdio.h>

void main(){

	int sum = 6,num = 0;
	for(int i = 0; i < 4; i++){
		
		sum = sum + ((2*i) - 1);
		num = sum;
		for(int j = 0; j < 7 - i; j++){
		
			if(j < i)
				printf(" \t");
			else{
				printf("%d\t",num);
				num+=i;
			}
		}
		printf("\n");
	}
}
