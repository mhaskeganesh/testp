#include<stdio.h>

int main() {
	float unit;
	printf("Units : ");
	scanf("%f", &unit);
	if(unit >= 0) {
		if(unit <= 50) {
			printf("Bill : Rs %f", unit * 0.50);
		} else if(unit > 50 && unit <= 100) {	
			printf("Bill : Rs %f", unit * 0.75);
		} else if(unit > 100 && unit <= 250) {
			printf("Bill : Rs %f", unit * 1.20);	
		} else {
			printf("Bill : Rs %f", unit * 1.50);
		}		
	} else {
		printf("Enter valid input.");
	}
	return 0;
}
