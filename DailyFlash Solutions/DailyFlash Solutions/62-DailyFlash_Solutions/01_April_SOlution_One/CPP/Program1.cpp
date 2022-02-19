#include<stdio.h>

int main(){


	char arr[300];
	fgets(arr,sizeof(arr),stdin);

	int len=0,max=0;

	for(int i=0; arr[i]!='\0'; i++)
		if(arr[i]==' '){
			len=0;
		}
		else{
			len++;

			if(len>max)
				max=len;

		}


	printf("Max length of String is : %d\n",max);
	return 0;
}
