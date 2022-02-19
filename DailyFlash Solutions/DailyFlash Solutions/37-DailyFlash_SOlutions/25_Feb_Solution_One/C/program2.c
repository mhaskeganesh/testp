#include<stdio.h>

int main() {
	int num1;
	int num2;
	printf("Enter num1 : ");
	scanf("%d", &num1);
	printf("Enter num2 : ");
	scanf("%d", &num2);
	double sqroot;
	double  temp;
	for(int i = num1;i  <= num2; i++) {
		sqroot = i / 2;
		temp = 0;
		while(sqroot != temp) {
			temp = sqroot;
			sqroot = (i / temp + temp) / 2;
		}
		printf("%f ", sqroot);
	}
	return 0;
}
