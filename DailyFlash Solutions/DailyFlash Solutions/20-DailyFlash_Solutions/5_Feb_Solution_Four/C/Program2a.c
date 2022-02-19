int printf(const char *,...);
int scanf(const char *,...);
#include<math.h>

void main(void){

	int num , num1 , cnt = 0 , dec =0 ; 
	printf("Eneter a binary number : ");
	scanf("%d",&num);
	while(num > 0){

		num1 = num % 10 ;
		num = num / 10 ;
		if(num1 == 1)
			dec += pow(2,cnt) ;
		cnt++ ;
	}
	printf("Corresponding octal number is  : %o\n",dec);
}
