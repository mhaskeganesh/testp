#include<stdio.h>

void main(){

	int n;
	int mul=1;

	printf("Enter the size of array : ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);


	for(int i=0; i<n; i++)
		if(i%2==0)//odd
			arr[i]=arr[i]*arr[i]*arr[i];
		else
			arr[i]=arr[i]*arr[i];
		
			
	for(int i=0; i<n; i++)
		printf("%d\t",arr[i]);

}
