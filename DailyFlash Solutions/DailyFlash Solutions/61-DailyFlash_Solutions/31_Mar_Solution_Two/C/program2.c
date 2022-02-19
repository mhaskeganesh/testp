
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
	printf("%ld\n", strlen(st));
}
