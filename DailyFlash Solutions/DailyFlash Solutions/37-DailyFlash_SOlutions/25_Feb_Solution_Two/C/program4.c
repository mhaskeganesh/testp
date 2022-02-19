
#include <stdio.h>

void  main() {

	int n = 4, m = 4, k = 1;
	printf("Enter Number : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		k = 1;
		m = n - i + 1;
		for(int j = 0; j < n; j++){
			if(j < i){
				printf("%d\t", m++);
			}
			else {
				printf("%d\t", k++);
			}
		}
		printf("\n");
	}
}
