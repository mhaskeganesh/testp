#include<stdio.h>
#include<string.h>

int main() {
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] =  '\0';
	int words = 0;
	for(int i = 0; i < strlen(arr); i++) {
		if(arr[i] == ' ')
			words++;
	}
	printf("%d", words + 1);
}

