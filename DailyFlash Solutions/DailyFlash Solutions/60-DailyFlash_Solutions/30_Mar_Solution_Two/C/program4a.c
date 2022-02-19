
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char *st = (char *)malloc(sizeof(char)*1);
	char ch;
	printf("Enter Any String : \n");
	int len = 1, cnt = 0;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		st[cnt++] = ch;
		if(cnt == len){
			len += 16;
			st = realloc(st, len);
		}
	}
	int n, k = 0;
	n = strlen(st);
	for(int i = 1; i <= n*2 - 1; i++){
		k = 0;
		for(int j = n; j >= 1; j--){

			if(j <= i && i <= n){
				printf("%c\t", st[j-1]);
			}
			else if(i > n && j < n - (i-n)) {
				printf("%c\t", st[j-1]);
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
