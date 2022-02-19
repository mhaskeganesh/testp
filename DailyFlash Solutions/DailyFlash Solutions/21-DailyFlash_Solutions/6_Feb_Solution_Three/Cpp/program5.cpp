#include<iostream>


int main(){
	
	int temp=0,num;
	int itr =1;
	while(itr <5){
		
	
		scanf("%d",&num);

		if(temp>num){
			printf("Loop is exited with input %d ",num);
			break;
		}	

		temp = num;
		itr++;
	}	
}	
