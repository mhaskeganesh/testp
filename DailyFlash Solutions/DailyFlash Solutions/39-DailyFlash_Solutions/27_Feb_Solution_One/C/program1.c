
#include <stdio.h>
main() {

	int n, rev = 0, l, u;
	printf("Lower and Upper Bound : ");
	scanf("%d%d", &l, &u);

	for(int i = l; i <= u; i++){
		n = i;
		rev = 0;
		while(n != 0){
			rev = rev * 10 + n % 10;
			n = n / 10;
		}
		if(rev == i){
			printf("%d ", i);
		}	
	}
	printf("\n");
}
