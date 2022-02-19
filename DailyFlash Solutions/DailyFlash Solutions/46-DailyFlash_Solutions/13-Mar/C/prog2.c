#include<stdio.h>
#include<string.h>
int main() {
	char num[10];
	printf("Enter num : ");
	fgets(num, sizeof(num), stdin);
	if(num[strlen(num) - 1] == '\n')
		num[strlen(num) - 1] = '\0';
	for(int i = 0; i < strlen(num); i++) {
		if(num[i] == '1')
			num[i] = '2';
	}
	printf("%s", num);
}
