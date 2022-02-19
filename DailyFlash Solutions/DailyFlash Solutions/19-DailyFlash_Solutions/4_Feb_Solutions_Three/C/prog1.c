#include<stdio.h>
#include<string.h>
int main(void) {
	int arr[101];
	for(int i = 0; i < 101; i++) {
		arr[i] = 1;
	}
	for(int i = 2; i * i <= 100; i++) {
		if(arr[i]) {
			for(int j = i * i; j <= 100; j += i) {
				arr[j] = 0;
			}
		}
	}

	for(int i = 2; i < 101; i++) {
		if(arr[i]) {
			printf("%d ", i);
		}
	}
	return 0;
}
