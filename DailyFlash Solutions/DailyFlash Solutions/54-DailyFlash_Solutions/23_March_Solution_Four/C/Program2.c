#include <stdio.h>

void main() {

	int len = 0;
	printf("Enter number of Elements\n");
	scanf("%d",&len);
	int arr[len],max = 0;

	printf("Enter the Elements\n");
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
		if(max < arr[i])
			max = arr[i];
	}
	
	printf("Maximum Element in array is %d\n",max);
}
