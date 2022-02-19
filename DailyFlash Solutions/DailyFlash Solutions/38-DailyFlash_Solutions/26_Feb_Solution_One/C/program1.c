
#include <stdio.h>
main() {

	int n, rev = 0;

	for(int i = 300; i <= 600; i++){
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
