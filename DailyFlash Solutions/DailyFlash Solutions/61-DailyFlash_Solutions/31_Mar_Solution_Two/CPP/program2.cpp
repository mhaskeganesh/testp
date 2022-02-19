
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
		if(cnt == len){
			len += 16;
			st = (char *)realloc(st, len);
		}
	}
	std::cout << strlen(st) << std::endl;
}
