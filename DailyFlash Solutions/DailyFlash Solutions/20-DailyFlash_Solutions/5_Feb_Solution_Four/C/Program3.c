int printf(const char * , ...);
int scanf(const char * , ...);

void main(void){

	for(int i = 1 ; i <= 100 ; i++){

		if(i % 2 == 0)
			continue;
		else		
			printf("%d\t",i);
	}
	printf("\n");
}

