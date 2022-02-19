#include <stdio.h>

int main() {

	int len = 0;
	printf("Enter number of Elements\n");
	scanf("%d",&len);
	int arr[len];
	int prod = 1;

	printf("Enter the Elements\n");
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
	}

	printf("Multiplication of Odd Elements are ");
	for(int i = 0; i < len; i++){
		if(arr[i]%2 != 0)
			prod*=arr[i];
	}
	printf("%d\n",prod);
	return 0;
}
