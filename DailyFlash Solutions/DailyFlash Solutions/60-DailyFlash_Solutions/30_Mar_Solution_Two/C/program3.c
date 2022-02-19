
#include <stdio.h>
#include <stdlib.h>
void main() {
	int n;
	printf("Enter length  of Array : ");
	scanf("%d", &n);
	int *arr = (int *)malloc(4*n);
	scanf("%d", &arr[0]);
	for(int i =  1; i < n ; i++){
		scanf("%d", &arr[i]);
	}
	int mul = 1;
	printf("\n");
	for(int i =  0; i < n ; i++){
		if(arr[i] % 2 == 1 ){
			mul = mul*arr[i];
		}
	}
	printf("mul : %d\n", mul);
}
