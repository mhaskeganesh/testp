#include<stdio.h>

int main(void) {
	int arr[5];
	for(int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if(i > 0) {
			if(arr[i - 1] > arr[i])
				break;
		}
	}
	return 0;
}
