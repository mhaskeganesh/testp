#include<stdio.h>

int main(void) {
	int num, sum = 0, cnt = 0;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num;
	int arr[10] = {0};
	while(num != 0) {
		arr[num % 10] += 1;
		num /= 10;
	}	
	for(int i = 0; i < 10; i++) {
		if(arr[i] != 0) {
			printf("Freqn of %d is %d\n", i, arr[i]);	
		}
	}
}
