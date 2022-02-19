#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
	char num[10];
	printf("Enter num : ");
	fgets(num, sizeof(num), stdin);
	int len = strlen(num);
	if(num[len - 1] == '\n')
		num[len - 1] = '\0';
	int temp = 0, sum = 0;
	for(int i = 0; i < strlen(num); i++) {
		temp = temp * 10 + num[i] - 48;
		sum += pow(num[i] - 48, i + 1);
	}
	if(sum == temp)
		printf("Disarium num");
}
