#include<stdio.h>

int main(void) {
	int n;
	printf("Enter size : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements of an array : ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Elements of an array in rev : ");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[n - i - 1]);
	}	
}
