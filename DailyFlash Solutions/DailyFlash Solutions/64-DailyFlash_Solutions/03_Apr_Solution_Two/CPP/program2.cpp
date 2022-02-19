
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0,cnt = 0;
	char ch;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'u' || ch == 'U'){
			cnt++;
		}
		if(k == len){
			len = len + 8;
			str = (char *)realloc(str, len);
		}

	}
	std::cout << cnt << std::endl;

}
