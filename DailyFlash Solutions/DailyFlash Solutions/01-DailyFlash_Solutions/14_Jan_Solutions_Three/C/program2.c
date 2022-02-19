
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	char c;

	printf("Enter Character  : ");
	scanf("%c", &c);
	
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
				c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			printf("%c is Vowel \n", c);
		}
		else {
			printf("%c is Consonant\n", c);
		}
	}
	else {
		printf("%c is not alphabet \n", c);
	}
}
