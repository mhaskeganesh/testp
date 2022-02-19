
int printf(const char *, ...);
int scanf(const char *, ...);

main() {

	int a, b;
	printf("Enter Numbers : \n");
	scanf("%d %d", &a, &b);

	printf("%d is max Number among %d & %d\n", (a >= b)? a : b, a, b);
	return 0;
}
