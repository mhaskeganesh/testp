
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

_Bool isPrime(int n) {
	int i = 2;
	while(i <= n/2){
		if(n % i == 0) {
			return false;
		}
		i++;
	}
	return true;
}

void  main() {
	int n, temp = -1, arr[20] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	printf("Enter Number :");
	scanf("%d", &n);
	if(isPrime(n)){
		printf("Number cannot express as addition of two prime numbers\n");
		return;
	}
	for(int i = 2; i < n; i++){
		if(isPrime(i)){
			arr[temp] = i;
			temp++;
		}
	}	
	for(int i = 0; i < temp - 1; i++){
        for(int j = i + 1; j < temp; j++){
            if(arr[i] + arr[j] == n){
                printf("%d + %d = %d\n", arr[i], arr[j], n);
				break;
            }
        }
    }
	printf("\n");
}
