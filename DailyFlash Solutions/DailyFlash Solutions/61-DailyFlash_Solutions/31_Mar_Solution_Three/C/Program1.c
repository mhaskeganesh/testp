#include<stdio.h>

void main(){


	char arr[300];
	fgets(arr,sizeof(arr),stdin);

	int count=0;

	for(int i=0; arr[i]!='\0'; i++)
		count++;

	printf("Number of Letters in String is : %d\n",count-1);



}
