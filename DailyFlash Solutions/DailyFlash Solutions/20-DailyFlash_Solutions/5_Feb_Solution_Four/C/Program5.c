int printf(const char * , ...);
int scanf(const char * , ...);

void main(void){

	for(int i = 4 ; i >= 1 ; i--){

		for(int j = 1 ; j <= 4 ; j++){
			
			(j < i) ? printf("\t") : printf("%d\t",j); 
		}	
		printf("\n");
	}
}

