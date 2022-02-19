
#include <stdio.h>
#include <stdlib.h>

void  main() {

	int n;
	char a = 'E', b = 'a';
	printf("Enter Radius :");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < i){
				printf("\t");
			}
			else{
				printf("%c\t", (j%2 == 0)? (a--) : (b++));
			}
		}
		printf("\n");
	}
}
