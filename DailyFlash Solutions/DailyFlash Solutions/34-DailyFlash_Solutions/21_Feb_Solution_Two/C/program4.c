
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  main() {

	int n = 4;
	char a = 'E', b = 'a';
	char arr[] = "CORE" ;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < i){
				printf("\t");
			}
			else{
				printf("%c\t", arr[j]);	
			}
		}
		printf("\n");
	}
}
