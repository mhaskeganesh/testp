#include <stdio.h>

void main() {

	int len = 0;
	printf("Enter number of Elements\n");
	scanf("%d",&len);
	int arr[len];

	printf("Enter the Elements\n");
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
	}

	printf("Square of Odd Elements are \n");
	for(int i = 0; i < len; i++){
		if(arr[i]%2 != 0)
			printf("%d\t",arr[i]*arr[i]);
	}
	printf("\n");
}
