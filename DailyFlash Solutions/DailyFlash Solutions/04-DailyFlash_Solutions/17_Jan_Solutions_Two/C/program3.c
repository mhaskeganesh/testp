
#include <stdio.h>
int printf(const char * , ...);
int scanf(const char * , ...);

void check(int  age, char sex, char status)  {

	if(sex == 'f' || sex == 'F'){
		printf("She will work in Urban areas\n");
	}
	else if(age >= 20 && age <= 40){
		printf("He will work in any areas\n");
	}
	else {
		printf("He will work in urban areas\n");
	}
}

void main() {
	
	char sex, status;
      	int age;
	void (*fptr)(int, char, char) = NULL;

	printf("Enter age, sex(m/f), Marital Status(y/n)\n");
	scanf("%d", &age);
	scanf(" %c", &sex);
	scanf(" %c", &status);

	if(age < 20 || age > 60 || (sex != 'f' && sex != 'F' && sex != 'm' && sex != 'M') || (status != 'y'
			&& status != 'Y' && status != 'n' && status != 'N')){
		printf("Error\n");
	}
	else{
		fptr = check;
		(*fptr)(age, sex, status);
	}
}
