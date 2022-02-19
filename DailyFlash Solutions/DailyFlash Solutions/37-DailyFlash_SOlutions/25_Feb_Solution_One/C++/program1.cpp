#include<iostream>

int main() {
	int num, sum, lowerbound, upperbound;
	printf("Enter lowerbound : ");
	scanf("%d", &lowerbound);
	printf("Enter upperbound : ");
	scanf("%d", &upperbound);
	for(int itr = lowerbound ; itr <= upperbound ; itr++) {
		num = itr;
		sum = 0;
		while(num != 0) {
			sum = sum + num % 10;
			num /= 10;
		}
		if(itr % sum == 0) {
		       printf("%d ", itr);
		} 
	}
}
