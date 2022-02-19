
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	
	int n;

	printf("Enter Number : \n");
	scanf("%d" , &n);

	switch(n){
		case 0:
			printf("Sunday\n");
			break;
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursay\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		default:
			printf("Not Valid Option\n");
			break;
	}
}
