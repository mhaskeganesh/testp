#include<stdio.h>

int main() {
	int num, n = 0;
	scanf("%d",  &num);
	int temp = num;
	while(temp != 0) {
		n++;
		temp /= 10;
	}
	int arr[n];
	int i = 0;
	while(num != 0) {
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	float sum = 0;
	int max = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}	
	}
	printf("Max : %d", max);

}
