
#include <stdio.h>

void main() {

	int arr[10];
	float sum = 0;
	
	printf("Enter Numbers : \n");
	for(int i = 0; i< 10; i++){
		scanf("%d", (arr+i));
		sum = sum + arr[i];
	}

	printf("Sum : %d\n", (int)(sum));
	printf("Average : %f\n", (sum / 10));
}
