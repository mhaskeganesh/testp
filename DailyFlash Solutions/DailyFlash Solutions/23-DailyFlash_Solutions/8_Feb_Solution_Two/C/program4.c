
#include <stdio.h>

int main () {
	
	int n,k = 1;
	printf("Enter Size : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		k = 1;
		for(int j = 1; j <= n ; j++){

			if(j <= (n-i)){
				printf("\t");
			}
			else if(j == (n-i+1)){
				printf("=\t");
			}
			else{
				printf("%d\t",k);
				k++;
			}

		}
		printf("\n");
	}	

}
