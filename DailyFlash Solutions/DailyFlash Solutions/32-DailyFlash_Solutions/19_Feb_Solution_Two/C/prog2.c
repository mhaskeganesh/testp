#include<stdio.h>
#include<string.h>
int main(void) {
	char bin[20];
	for(int i = 0; i < sizeof(bin); i++) {
		bin[i] = '\0';
	}
	int i = 0, num;
	printf("Enter num : ");
	scanf("%d", &num);
	while(num != 0) {
		bin[i] = num % 2 + '0';
		num /= 2;
		i++;
	}
	int len = strlen(bin);
	printf("Bin : ");
	for(int j = 0; j < len; j++) {
		printf("%c", bin[len - 1 - j]);
	}
	return 0;
}	
