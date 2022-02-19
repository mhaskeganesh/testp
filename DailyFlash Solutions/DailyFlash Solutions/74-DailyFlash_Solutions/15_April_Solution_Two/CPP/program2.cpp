
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main () {
	int k = 0, len = 1,i;
	char ch, *str = (char *)malloc(sizeof(char)*len);
	char *substr = (char *)malloc(sizeof(char)*len);
	std::cout << ("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len += 2;
			str = (char *)realloc(str, len);
		}
	}
	k = 0;
	len = 1;
	std::cout << ("Enter Sub String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		substr[k++] = ch;
		if(k == len){
			len += 2;
			substr = (char *)realloc(substr, len);
		}
	}
	len = strlen(str);
	k = 0;
	int flag = 0;
	char *temp = NULL;
	for(i = 0 ; i < len; i++){
		if(k == strlen(substr)){
			temp = &str[i];
			str[i-k] = '\0';
			std::cout << str << temp << std::endl;
			flag = 1;
			break;
		}
		else if(k ==  1 && str[i] == substr[k-1] && substr[k] != substr[k-1]) {

		}
		else if(str[i] == substr[k]){
			k++;
		}
		else if((k = 0) + 1 && str[i] == substr[k]){
			k++;
		}
	}
	
	if(k == strlen(substr) && flag == 0){
		str[i-k] = '\0';
		std::cout << (str) << std::endl;
		
	}
	else if(flag == 0){
		std::cout << ("substring not found\n");
	}

}
