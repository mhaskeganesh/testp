
#include <stdio.h>

void main () {
	int n, k = 1, inc = 0;
	printf("Enter Number : ");
	scanf("%d" , &n);
	k = 6;
	inc = -1;
	int m = 0, l;
	for(int i = n; i >= 1; i--){
		k = k + inc;
		l = k;
		for(int j = 1; j < n+i; j++){
			if(j > n - i){
				printf("%d\t",l);
				l = l + m;
			}
			else
				printf("\t");
		}
		m++;
		inc = inc + 2;
		printf("\n");
	}
}	
