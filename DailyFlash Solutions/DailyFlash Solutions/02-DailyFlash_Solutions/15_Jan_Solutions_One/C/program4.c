
int printf(const char *, ...);
int scanf(const char *, ...);
void exit(int);

main() {

	int a;
	printf("Enter Positive Size : \n");
	scanf("%d", &a);
	
	(a > 0 )? a: exit(0);
	
	int k = 1;
	for(int i = 1; i <= a*a; i++ ){
		if(i % a == 0){
			printf("%d\n", k);
			k = 1;
		}
		else{
			printf("%d ", k);
			k++;
		}
	}
	return 0;
}
