#include<iostream>
#include<math.h>

int main(void){

	int num , num1 , cnt = 0 , dec =0 ; 
	std::cout << "Eneter a binary number : ";
	std::cin >> num;
	while(num > 0){

		num1 = num % 10 ;
		num = num / 10 ;
		if(num1 == 1)
			dec += pow(2,cnt) ;
		cnt++ ;
	}
	std::cout << "Corresponding octal number is  : " << std::oct << dec << "\n";
}
