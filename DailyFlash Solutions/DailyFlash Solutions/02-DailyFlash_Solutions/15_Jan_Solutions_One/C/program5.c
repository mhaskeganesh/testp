
int printf(const char *, ...);
int scanf(const char *, ...);
void exit(int);

main() {

	int a, b, c;
	printf("Enter angles of triangle in Degree : \n");
	scanf("%d %d %d", &a, &b, &c);

	if(a +  b + c == 180){
		printf("Valid triangle");
	}
	else{
		printf("not Valid triangle");
	}
	
}
