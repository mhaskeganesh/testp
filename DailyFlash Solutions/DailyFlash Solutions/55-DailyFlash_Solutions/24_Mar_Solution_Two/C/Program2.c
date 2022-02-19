#include <stdio.h>

void main() {

	int len = 0;
	printf("Enter number of Elements\n");
	scanf("%d",&len);
	int arr[len],min = 99999;

	printf("Enter the Elements\n");
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
		if(min > arr[i])
			min = arr[i];
	}
	
	printf("Minimum Element in array is %d\n",min);
}
