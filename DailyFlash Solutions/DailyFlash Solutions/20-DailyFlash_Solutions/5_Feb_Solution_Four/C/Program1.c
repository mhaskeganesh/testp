int printf(const char * , ...);
int scanf(const char * , ...);

void main(void){

	int num = 0 , num1 = 1 , num2 ;
	printf("%d\t%d\t",num,num1);
	for(int i = 1 ; i <= 4 ; i++){
		num2 = num1 + num ;
		printf("%d\t",num2);
		num = num1 ;
		num1 = num2 ;
	}
	printf("\n");
}
/*num2	i	printf()	num	num1
  		0,1		0	1
1	1	1		1	1
2	2	2		1	2
3	3	3		
*/ 
