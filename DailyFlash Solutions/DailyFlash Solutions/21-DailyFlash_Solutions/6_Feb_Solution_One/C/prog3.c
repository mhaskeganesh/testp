#include<stdio.h>

int main(void) {
	int num, i = 0;;
	printf("Enter 10 numbers : \n");
	while(i < 10) {
		scanf("%d", &num);
		if(num < 0)
			break;
		i++;
	}
	return 0;
}
