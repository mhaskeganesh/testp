/*
Program 3: Write a Program to check if a year is leap year or not.
{Note: If a year is divisible by 4 then it is leap year but if the year is century
year like 2000, 1900, 2100 then it must be divisible by 400}
*/

#include<iostream>

int main(){
	
	int year;
	
	
	std::cout<<"Enter the year: ";
	std::cin>>year;


	if(year%4==0){

		if(year%100==0&&year%400!=0)
			std::cout<<"is not leap year";
		else
			std::cout<<"is leap year";
		

	}else{
		
		std::cout<<"is not leap year";
	}		

}


