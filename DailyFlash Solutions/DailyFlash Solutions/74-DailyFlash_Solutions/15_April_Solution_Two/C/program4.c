
#include <stdio.h>

void main () {
	int n, flag;
	printf("Enter Limit : ");
	scanf("%d", &n);

	for(int i = 1; i < 2*n; i++){
		flag = 1;
		for(int j = 1; j < 2*n; j++){
			if(i <= n && j > (n-i) && j < (n+i)){
				if(flag == 1){
					printf("1\t");
					flag = 0;
				}
				else{
					printf("\t");
					flag = 1;
				}
			}
			else if(i>n && j > (i-n)  && j < (2*n-(i-n))){
				if(flag == 1){
					printf("1\t");
					flag = 0;
				}
				else{
					printf("\t");
					flag = 1;
				}
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
}
