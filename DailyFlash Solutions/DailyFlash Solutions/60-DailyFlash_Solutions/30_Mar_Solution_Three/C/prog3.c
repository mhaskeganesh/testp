#include<stdio.h>

int main() {
	int num = 1, n = 0;
	scanf("%d",  &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(arr[i]%2 == 1)
			num*=arr[i];
	}
	printf("%d", num);


}
