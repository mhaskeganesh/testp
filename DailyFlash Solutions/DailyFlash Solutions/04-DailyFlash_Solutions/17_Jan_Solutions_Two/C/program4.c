
int printf(const char *, ...);
int scanf(const char *, ...);
void exit(int);

void main() {

	int a;
	printf("Enter Size : ");
	scanf("%d", &a);

	if(a < 0) 
		exit(0);
	
	int s = a * a;
	int k = 2;
	for(int i = 1; i <= s; i++){
		if(i % a == 0) {
			printf("%d\n", k);
			k = 2;
		}
		else{
			printf("%d\t", k);
			k+=2;
		}
	}
}

