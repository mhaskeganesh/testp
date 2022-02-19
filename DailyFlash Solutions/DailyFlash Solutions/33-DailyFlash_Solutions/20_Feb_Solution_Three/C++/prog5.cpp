#include<iostream>

int main() {
	
	int num, rem, flag = 0, sum;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num;
	while(num != 0) {
		rem = num % 10;
		sum = 0;
		for(int i = 1; i <= rem / 2; i++) {
			if(rem % i == 0) 
				sum += i;
		}
		if(sum == rem) {
			std::cout << rem << " ";
			flag++;
		}
		num /= 10;
	}
	if(flag == 0)
		std::cout << "The num " << temp <<" not have any digit ehich is perfect in nature.";
	return 0;
}
