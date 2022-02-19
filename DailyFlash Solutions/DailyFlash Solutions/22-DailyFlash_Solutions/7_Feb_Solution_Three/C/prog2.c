#include<stdio.h>
#include<string.h>

int main(void) {
	int num, i = 0, quo, rem;
	char arr[10];
	for(int i = 0; i < 10; i++) {
		arr[i] = '\0';
	}
	printf("Enter num : ");
	scanf("%d", &num);

	while(1) {
		quo = num / 16;
		rem = num % 16;
		num = quo;
		arr[i] = rem < 10 ? (char)(48 + rem) : (char)(55 + rem);
		i++;
		if(quo == 0)
			break;
	}	

	for(int i = strlen(arr) - 1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	return 0;
}
