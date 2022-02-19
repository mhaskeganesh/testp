
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	char c;

	printf("Enter Character  : ");
	scanf("%c", &c);
	
	if(c >= 65 && c <= 90) {
		printf("%c is in UpperCase \n", c);
	}
	
	else if(c >= 97 && c <= 122){
		printf("%c is in LowerCase \n", c);
	}
	else{
		printf("%c is not alphabet \n", c);
	}
}
