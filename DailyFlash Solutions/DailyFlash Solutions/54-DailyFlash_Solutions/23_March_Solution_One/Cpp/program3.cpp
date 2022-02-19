#include<iostream>


int main(){
	
	int len;

	int arr[100];
	int max=0;
	printf("Enter the length : ");
	scanf("%d",&len);
	
	for(int itr = 0 ; itr<len ; itr++){
		
		scanf("%d",arr+itr);

		if(max<*(arr+itr)){
			
			max = *(arr+itr);
		}	
	}	

	printf("Maximum number : %d ",max);



	

}	
