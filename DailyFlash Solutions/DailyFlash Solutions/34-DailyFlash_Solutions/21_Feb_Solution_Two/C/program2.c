
#include <stdio.h>

void  main() {
	int n, temp, i = 0;
	printf("Enter Number :");
	scanf("%d", &n);
	while(n!=0) {
		temp = n%10;
		if(temp >= 8){
			i = 3;
			char bin[4] = {'\0'};
			while(i>=0) {
				bin[i] = (temp % 8) + 48;
				temp = temp / 8;
				i--;
			}
			printf("octal of %d : %s\n", n%10, bin);
		}
		else{
			printf("octal of %d : 000%d\n", n%10,n%10);
		}
		n = n/10;
	}
}
