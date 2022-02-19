
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 4; j++){
			if(j % 2 == 0){
				printf("white-black\t");
			}
			else{
				printf("black-white\t");	
			}
		}
		printf("\n");
	}
}
