
#include <stdio.h>
#include <math.h>

void main () {
	
	int n, rev = 0,temp, sum = 0;
	printf("Enter Number : ");
	scanf("%d", &n);
	temp = n;
	while(n != 0){
		rev = rev * 10 + n %10;
		n =  n /10;
	}
	n = rev;
	rev = temp;
	temp = 1;
	while(n != 0){
		
		sum = sum + pow(n % 10, temp);
		temp++;
		n = n / 10;
	}
	if(sum == rev)
		printf("%d is Disarium Number\n", sum);
	else
		printf("%d is Not Disarium Number\n", rev);
}
