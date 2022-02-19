#include<stdio.h>

int main() {
	int num, n = 0;
	scanf("%d",  &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		printf("%d", arr[i] * arr[i]);
	}


}
