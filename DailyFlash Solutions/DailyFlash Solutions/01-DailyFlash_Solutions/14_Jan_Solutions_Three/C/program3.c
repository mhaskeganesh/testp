
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	char c;

	printf("Enter Character  : ");
	scanf("%c", &c);
	
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		printf("%c is alphabet \n", c);
	}
	else if (c >= 48 && c <= 57){
		printf("%c is digit\n", c);
	}
	else{
		printf("%c is Special Character\n", c);
	}
}
