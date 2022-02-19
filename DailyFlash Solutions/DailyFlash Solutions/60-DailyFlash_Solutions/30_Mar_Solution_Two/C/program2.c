
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char *st = (char *)malloc(sizeof(char)*1);
	char ch;
	printf("Enter Any String : \n");
	int len = 1, cnt = 0;
	int max = 65;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		st[cnt++] = ch;
		if(ch > max)
			max = ch;
		if(cnt == len){
			len += 16;
			st = realloc(st, len);
		}
	}
	cnt = 0;
	for(int i = 1; i < strlen(st); i++){
		if((st[i-1] == ' ' || st[i-1] == '\t')&& st[i] != ' '){
			cnt++;
		}
	}
	printf("%d\n", cnt+1);
}
