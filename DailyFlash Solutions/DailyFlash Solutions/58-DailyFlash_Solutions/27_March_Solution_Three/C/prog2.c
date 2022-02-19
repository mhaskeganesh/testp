#include<stdio.h>
#include<string.h>

int main() {
	char arr[10];
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] =  '\0';
	for(int i = 0; i < strlen(arr); i++) {
		if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			arr[i]+=1;
		printf("%c", arr[i]);
	}
}

