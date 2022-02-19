
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	char *st = (char *)malloc(sizeof(char)*1);
	char ch;
	std::cout << ("Enter Any String : \n");
	int len = 1, cnt = 0;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		st[cnt++] = ch;
		if(cnt == len){
			len += 16;
			st = (char *)realloc(st, len);
		}
	}
	int n, k = 0;
	n = strlen(st);
	for(int i = 1; i <= n*2 - 1; i++){
		k = 0;
		for(int j = 1; j <= n; j++){
			if(i <= n && j <= i){
				std::cout << (st[k++]) << "\t";
			}
			else if(i > n && j > i - n) {
				
				std::cout << (st[k++]) << "\t";
			}
		}
		std::cout << ("\n");
	}
}
