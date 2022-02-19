#include<iostream>
#include<string.h>
#include<ctype.h>
int main() {
	char arr[20], max = 100;
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] =  '\0';
	int cnt = 0;
	for(int i = 0; i < strlen(arr); i++) {
		if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			cnt++;
	}
	std::cout << cnt;
}

