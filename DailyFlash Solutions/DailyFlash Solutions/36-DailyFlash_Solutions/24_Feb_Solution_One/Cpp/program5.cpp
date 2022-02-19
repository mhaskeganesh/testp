#include<iostream>
#include<string.h>
#include<stdlib.h>

int main(){

	char num[10]={'\0'};

	
	printf("Enter the number : ");
	scanf("%s",num);

	//int jtr = strlen(num)-1;
	int itr = 0;
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	while(num[itr]!='\0'&&num[itr]!='\n'){
		int count=0;
		int jtr = strlen(num)-1;
		while(jtr>=itr){
			
			if(num[jtr]==num[itr]){
				if(arr[(num[itr])-48]==0){
					count++;
					//printf("%c\n",num[itr]);
				}	
				else
					break;
			}	
			jtr--;
		}
		
		if(arr[(num[itr])-48]==0)	
			printf("%c = %d\n",num[itr],count);
		arr[(num[itr])-48]=1;
		itr++;

	}	
	
}	
