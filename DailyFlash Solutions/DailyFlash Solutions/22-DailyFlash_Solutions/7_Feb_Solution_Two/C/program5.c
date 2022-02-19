
#include <stdio.h>

int main () {
	
	int n;
	printf("Enter Size : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n ; j++){
			if(j == i){
				printf("=\t");
			}
			else{
				printf("%d\t",(j));
			}
		}
		printf("\n");
	}	

}
