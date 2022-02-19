
#include <iostream>
int  main() {

	int n;
	char a, b = 'a';
	std::cout << ("Enter Number :");
	std::cin >> n;
	a = (n%2==0)?((n/2)*(n/2)):(((n+1)/2)*((n+1)/2));
	a = a + 65;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < i){
				std::cout << ("\t");
			}
			else{
				std::cout << ((j%2 == 0)? (a--) : (b++)) << "\t"; 
			}
		}
		std::cout << ("\n");
	}
}


// To find the addition of odd numbers till the given limit
/*if n is the limit = 21   if n is odd else don't add 1 to n
	add 1 to n
	n = n + 1
	then divide it by 2
	n = (n + 1) /2
	sum = n * n
*/