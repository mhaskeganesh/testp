
int printf(const char *, ...);
int scanf(const char *, ...);

main() {

	int a;
	printf("Enter Number : \n");
	scanf("%d", &a);

	printf("%s\n", (a % 2 ==  0)? "Even Number" : "Odd Number");
	return 0;
}
