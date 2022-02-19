#include<iostream>

int main() {
	int p, c, m, b, comp;
	float total;
	std::cout<<"Input : ";
	std::cin>>p>>c>>m>>b>>comp;
	total = (p+c+m+b+comp)/5;
	if(p>=0 && c>=0 && m>=0 && b>=0 && comp>=0 && p<=100 && c<=100 && m<=100 && b<=100 && comp<=100){
		if(total>=90){
			std::cout<<"Grade A";
		}else if(total>=80 && total<90){
			std::cout<<"Grade B";
		} else if(total>=70 && total<80){
			std::cout<<"Grade C";
		} else if(total>=60 && total<70){
			std::cout<<"Grade D";
		} else if(total>=40 && total<60){
			std::cout<<"Grade E";
		} else if(total<40){
			std::cout<<"Grade F";
		}
	} else {
		std::cout<<"Enter valid marks";
	}
	return 0;
}
