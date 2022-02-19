
#include <stdio.h>

int main () {
	
	int n, k = 1;
	printf("Enter Size : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n ; j++){

			if(j <= n-i){
				printf("\t");
			}
			else{
				printf("%c\t",(64+k));
				k++;
			}

		}
		k = 1;
		printf("\n");
	}	

}
