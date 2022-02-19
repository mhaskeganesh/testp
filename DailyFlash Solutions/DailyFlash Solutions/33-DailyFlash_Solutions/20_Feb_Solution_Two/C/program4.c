
#include <stdio.h>
#include <stdlib.h>

void  main() {

	int n, k;
	char a = 'E', b = 'a';
	printf("Enter Number :");
	scanf("%d", &n);
	for(int i = 0; i < n*2; i+=2){
		k = i;
		for(int j = 0; j < n*2; j+=2){
			if(j < i){
				printf("\t");
			}
			else{
				char bin[4] = {'\0'};
				int m = 3, n = k;
				while(m>=0) {
					bin[m] = (n % 2) + 48;
					n = n / 2;
					m--;
				}
				printf("%s\t", bin);
				k++;
			}
		}
		printf("\n");
	}
}
