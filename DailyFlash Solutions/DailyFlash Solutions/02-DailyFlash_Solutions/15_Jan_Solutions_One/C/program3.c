
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	int c;

	printf("Enter Month  : ");
	scanf("%d", &c);
	
	if((c >= 1 && c <= 7 && c % 2 == 1) || (c >= 8 && c <= 12 && c % 2 == 0)){
		printf("Number of days 31\n");
	}
	else if (c == 2){
		printf("Number of days 28\n");
	}
	else if(c <= 12 && c >= 1){
		printf("Number of days 30\n");
	}
	else {
		printf("Invalid Entry\n");
	}
}
