#include<iostream>

int main() {
	char sex;
	int age;
	std::cout << "Enter sex : ";
	std::cin >> sex;
	std::cout <<  "Enter Age : ";
	std::cin >> age;
	if((sex == 'M' || sex == 'F' || sex == 'm' || sex == 'f') && (age >= 20 && age <= 60)){
		if(sex == 'F' || sex == 'f'|| (sex == 'M' || sex == 'm' && age > 40 && age <= 60)) {
			std::cout << "Work in arban areas.";
		} else if(sex == 'M' || sex == 'm' && (age >= 20 && age <= 40)) {
			std::cout << "Work anywhere.";
		} 
	} else {
		std::cout << "Error.";
	}
	return 0;
}
