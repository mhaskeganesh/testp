
#include <iostream>
#include<string.h>
int main () {

	char p[10];
	std::cout << ("Enter String : ");
	std::cin.getline(p,sizeof(p));
	int len = strlen(p);
	int num = 0,ct = 0,j = 0, i = len % 3;
	if(i != 0){
		while(j < len % 3){
			num = num*2 + (p[j]-'0');
			j++;	
		}
		std::cout << (num);
	}
	num = 0;
	while(i < len){
		num = num*2 + (p[i]-'0');
		i++;
		ct++;
		if(ct == 3){
			ct = 0;
			std::cout << (num);
			num = 0;
		}
	}	
	std::cout << ("\n");
}

