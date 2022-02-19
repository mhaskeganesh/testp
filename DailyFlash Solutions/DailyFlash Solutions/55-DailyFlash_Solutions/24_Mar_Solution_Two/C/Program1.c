#include <stdio.h>

char* toLowerCase(char *source){

	char *src = source;
	while(*src != '\0'){

		if(*src >= 65 && *src <= 90){

			*src = (*src + 32);
		}
		src++;
	}

	return source;
}

void main() {


	char inp[50] = {'\0'};
	printf("Enter a String\n");
	fgets(inp,sizeof(inp),stdin);

	printf("Lower Case String is\n%s",toLowerCase(inp));
}
