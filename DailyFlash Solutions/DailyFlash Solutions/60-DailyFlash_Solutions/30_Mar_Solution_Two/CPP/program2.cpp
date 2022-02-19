
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	char *st = (char *)malloc(sizeof(char)*1);
	char ch;
	std::cout << ("Enter Any String : \n");
	int len = 1, cnt = 0;
	int max = 65;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		st[cnt++] = ch;
		if(ch > max)
			max = ch;
		if(cnt == len){
			len += 16;
			st = (char *)realloc(st, len);
		}
	}
	cnt = 0 ;
	for(int i = 1; i < strlen(st); i++){
		if((st[i-1] == ' ' || st[i-1] == '\t') && st[i] != ' '){
			cnt++;
		}
	}
	std::cout << cnt+1 << std::endl;
}
