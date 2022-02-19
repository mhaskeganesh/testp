#include<stdio.h>

int main() {
	char sex;
	int age;
	printf("Enter sex : ");
	scanf("%c", &sex);
	printf("Enter Age : ");
	scanf("%d", &age);
	if((sex == 'M' || sex == 'F' || sex == 'm' || sex == 'f') && (age >= 20 && age <= 60)){
		if(sex == 'F' || sex == 'f'|| (sex == 'M' || sex == 'm' && age > 40 && age <= 60)) {
			printf("Work in arban areas.");
		} else if(sex == 'M' || sex == 'm' && (age >= 20 && age <= 40)) {
			printf("Work anywhere.");
		} 
	} else {
		printf("Error.");
	}
	return 0;
}
