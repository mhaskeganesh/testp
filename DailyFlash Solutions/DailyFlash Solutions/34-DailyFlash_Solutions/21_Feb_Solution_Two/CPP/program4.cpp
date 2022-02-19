
#include <iostream>
#include <string.h>

int  main() {

	int n = 4;
	char a = 'E', b = 'a';
	char arr[] = "CORE";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < i){
				std::cout << ("\t");
			}
			else{
				std::cout << arr[j] << "\t";	
			}
		}
		std::cout << ("\n");
	}
}
