
int printf(const char *, ...);
int scanf(const char *, ...);

main() {

	int a;
	printf("Enter Number : \n");
	scanf("%d", &a);

	printf("%s\n", (a > 0)? "Number is Positive" : (a == 0) ? "Number is equal to zero" : "Number is Negative");
	return 0;
}
