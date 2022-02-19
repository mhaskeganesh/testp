
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < i){
				printf("\t");
			}
			else{
				printf("%d\t", i*j);	
			}
		}
		printf("\n");
	}
}
