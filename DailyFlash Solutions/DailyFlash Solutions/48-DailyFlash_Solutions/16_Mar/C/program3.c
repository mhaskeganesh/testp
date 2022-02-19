
#include <stdio.h>

void main () {
	int n,temp,rev;

	printf("Enter Numbers : ");
	do {
		scanf("%d", &n);
		rev = 0;
		temp = n;
		while(n != 0){
			rev = rev * 10 + n % 10;
			n /= 10;
		}
		if(temp != rev)
			printf("%d\n", temp);
		else
			break;
	}while(1);
}
