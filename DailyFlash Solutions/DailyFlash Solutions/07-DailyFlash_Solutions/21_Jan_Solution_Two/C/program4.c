
#include <stdio.h>
void exit(int);

int main() {
	
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	if (n == 0)
		exit(0);
	for(int i = 1; i <= 10; i++)
		printf("%d  ",i * n);
	printf("\n");
	
	return 0;
}
