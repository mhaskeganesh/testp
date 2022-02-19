#include<stdio.h>
#include<string.h>

int main() {
	char arr[10];
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] =  '\0';
	for(int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i] - 32);
	}
}

