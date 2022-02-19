
#include <stdio.h>

void  main() {

	int n = 4;
	printf("Enter Number : ");
	scanf("%d", &n);
	if(n < 0)
		return;
	char k = 65,j;
	for(int i = 0; i < n;i++){
		for(j = 0; j < n - i;j++){
			printf("%c\t", k);
			k = k +  j + 1;
		}
		k = k - j;
		printf("\n");
	}
}
