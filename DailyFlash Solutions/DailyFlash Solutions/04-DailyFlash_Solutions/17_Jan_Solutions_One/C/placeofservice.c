/*Program 3: Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and
then using following rules print their place of service.
if employee is female, then she will work only in urban areas.
if employee is a male and age is in between 20 to 40 then he may work
in anywhere
if employee is male and age is in between 40 t0 60 then he will work in
urban areas only.
And any other input of age should print "ERROR".*/

#include<stdio.h>

void main(){
	
	int age;
	char sex;
	char maritalStatus;

	printf("Enter the age : ");
	scanf("%d",&age);
	printf("Enter the sex(M and F) : ");
	scanf(" %c",&sex);
	printf("Enter the maritalStatus(Y and N) : ");
	scanf(" %c",&maritalStatus);

	if(sex == 'F'&& age <60){
		
		printf("Work only in urban areas");

	}else if(sex == 'M'&& age<60){
		
		if(age>=20&&age<=40){

			printf("may work anywhere");

		}else if(age > 40 && age<=60){
			
			printf(" will work in urban areas only");
		}else{
			printf("ERROR");
		}	
	}else {
		printf("ERROR");
	}		

}	
