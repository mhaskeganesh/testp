int printf(const char * , ...);
int scanf(const char * , ...);

void main(void){

	int num1 = 97  ;
	for(int i = 0 ; i < 4 ; i++){
		int num = 97;
		num1 = num + 2*i ;
		num = num1 ;
		for(int j = 4 ; j > i ; j--){
			printf("%c\t",num++); 
		}
		printf("\n");
	}
}

