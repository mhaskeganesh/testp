#include<stdio.h>

int main() {
	int num = 1, n = 0;
	scanf("%d",  &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(arr[i]%2 == 1)
			arr[i] = arr[i] * arr[i] * arr[i];
		else
			arr[i] = arr[i] * arr[i];
	}
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}


}
