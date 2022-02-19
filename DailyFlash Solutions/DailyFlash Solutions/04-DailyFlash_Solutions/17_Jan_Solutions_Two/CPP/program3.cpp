#include <iostream>

void check(int  &age, char &sex, char &status)  {

	if(sex == 'f' || sex == 'F'){
		std::cout << ("She will work in Urban areas\n");
	}
	else if(age >= 20 && age <= 40){
		std::cout << ("He will work in any areas\n");
	}
	else {
		std::cout << ("He will work in urban areas\n");
	}
}

int main() {
	
	char sex, status;
      	int age;
	void (*fptr)(int&, char&, char&) = NULL;

	std::cout << ("Enter age, sex(m/f), Marital Status(y/n)\n");
	std::cin >> age;
	std::cin >>  sex;
	std::cin >>  status;

	if(age < 20 || age > 60 || (sex != 'f' && sex != 'F' && sex != 'm' && sex != 'M') || (status != 'y'
			&& status != 'Y' && status != 'n' && status != 'N')){
		std::cout << ("Error\n");
	}
	else{
		fptr = check;
		(*fptr)(age, sex, status);
	}

	return 0;
}
