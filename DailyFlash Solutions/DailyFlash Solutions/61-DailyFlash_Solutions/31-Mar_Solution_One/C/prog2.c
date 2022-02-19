#include<stdio.h>
#include<string.h>

int main() {
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] =  '\0';
	printf("%d", strlen(arr));
}

