#include<stdio.h>

void main(){

	printf("Enter a String\n");

	char arr[300];
	fgets(arr,sizeof(arr),stdin);

	char str[6] = "AEIOU";
	int vow = 0;
	for(int i=0; arr[i]!='\0'; i++){

			for(int j=0; str[j]!='\0'; j++){
				if(arr[i] == str[j] || arr[i] == str[j]+32)
					vow++;
			}
	}

	printf("Count of Vowels is %d\n",vow);

}
