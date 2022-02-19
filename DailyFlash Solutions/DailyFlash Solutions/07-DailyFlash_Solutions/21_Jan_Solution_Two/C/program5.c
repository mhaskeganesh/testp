
#include <stdio.h>
void exit(int);

int main() {
	
	int n;
	printf("Enter Size : ");
	scanf("%d", &n);
	if (n <= 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++)
			printf("0  ");
		printf("\n");
	}
	return 0;
}
