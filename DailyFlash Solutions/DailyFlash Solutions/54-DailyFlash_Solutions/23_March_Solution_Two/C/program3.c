
#include <stdio.h>
#include <stdlib.h>
void main() {
	int n;
	printf("Enter length  of Array : ");
	scanf("%d", &n);
	int *arr = (int *)malloc(4*n);
	scanf("%d", &arr[0]);
	int max = arr[0];
	for(int i =  1; i < n ; i++){
		scanf("%d", &arr[i]);

		if(max < arr[i])
			max = arr[i];
	}
	printf("Max : %d\n", max);
}
