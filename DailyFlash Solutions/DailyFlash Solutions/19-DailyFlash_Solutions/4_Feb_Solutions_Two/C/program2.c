
#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main () {

	long n;
	int k, d = 0;
	printf("Enter Number : ");
	scanf("%ld", &n);


	int i = 0;
	while(n != 0){
		if(n%10 != 1 && n%10 != 0)
			exit(0);
		d = d + (n % 10) * pow(2,i);
		n = n / 10;
		i++;
	}

	printf("%d\n", d);
}

/*
	cc program2.c -lm
	./a.out
	1011\n
	11

*/
