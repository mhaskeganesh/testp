
int printf(const char *, ...);
int scanf(const char *, ...);
void exit(int);

main() {

	int a;
	printf("Enter Number: \n");
	scanf("%d", &a);

	printf("%s\n", (a % 5 == 0 && a % 11 == 0)? "Number is divisible by 5 & 11": "Number is not divisible by 5 & 11");

	return 0;
}
