#include <stdio.h>

void main() {


	char inp[100] = {'\0'};
	int words = 1;
	printf("Enter a String\n");
	fgets(inp,sizeof(inp),stdin);
	char *ptr = inp;

	while(*ptr != '\0'){

		if(*ptr == ' ')
			words++;
		ptr++;
	}
	printf("Number of Words in String are %d\n",words);
}
