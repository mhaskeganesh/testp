#include<stdio.h>
#include<string.h>
int main() {
	char num[10];
	fgets(num, sizeof(num), stdin);

	if(num[strlen(num) - 1] == '\n')
		num[strlen(num) - 1] = '\0';
	if(num[0] == '0') {
		printf("Not deck");
		return -1;
	}
	for(int i = 1; i < strlen(num); i++) {
		if(num[i] == '0') {
			printf("Duck num");
			break;
		}
	}
	return 0;
}
