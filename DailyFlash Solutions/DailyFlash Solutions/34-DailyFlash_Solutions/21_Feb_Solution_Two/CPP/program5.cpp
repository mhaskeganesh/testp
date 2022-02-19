
#include <iostream>
#include <vector>

bool isPrime(int n) {
	int i = 2;
	while(i <= n/2){
		if(n % i == 0) {
			return false;
		}
		i++;
	}
	return true;
}

int  main() {
	std::vector<int> v;
	int n;
	std::cout << ("Enter Number :");
	std::cin >> n;
	if(isPrime(n)){
		std::cout << ("Number cannot express as addition of two prime numbers\n");
		return 0;
	}
	for(int i = 2; i < n; i++) {
            if(isPrime(i)){
                v.push_back(i);
            }
    }
	
	for(int i = 0; i < v.size() - 1; i++){
    	for(int j = i + 1; j < v.size(); j++){
        	if(v[i] + v[j] == n){
            	std::cout << v[i] << " + " << v[j] << " = "  << n << std::endl; 
            }
        }
    }
}
