#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char arr[20], max = 0;
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] =  '\0';
	int cnt = 0;
	int index = 0;
	int temp_index = 0;
	for(int i = 0; i < strlen(arr); i++) {
		cnt++;
		if(isspace(arr[i])) {
			if(max < cnt) {
				max = cnt;
				index = temp_index;
			}
			cnt = 0;
			temp_index = i + 1;
		}
	}
	if(max < cnt) {
		max = cnt;
		index = temp_index;
	}
	max = index + max;
	while(index < max) {
		printf("%c", arr[index]);
		index++;
	}
}

