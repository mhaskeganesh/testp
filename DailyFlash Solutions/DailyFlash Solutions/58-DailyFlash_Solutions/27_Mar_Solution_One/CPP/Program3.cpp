#include <stdio.h>

int main(){

	char str[100] = {'\0'};
	printf("Enter a String\n");
	fgets(str,sizeof(str),stdin);
	for(int i = 0; i < 7; i++){

		for(int j = 0; j <= i; j++){

			if(i+j <= 6){

				printf("%c\t",str[j]);
			}
			else if(j < 4){	
				printf(" \t");
			}
		}
		printf("\n");
	}
	return 0;
}
