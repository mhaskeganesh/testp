#include<iostream>


int main(){
	
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);
	int temp = num;
	int flag = 0;
	while(num!=0){

		int rem = num%10;
		int sum =0;
		for(int itr=1;itr<=rem/2;itr++){
			
			if(rem%itr==0)
				sum=sum+itr;
		}
		if(sum==rem){
			flag = 1;	
			printf("%d is perfect",rem);
		}	
		num = num/10;
	}	

	if(flag==0){
		printf("%d does not have the perfect number ",temp);
	}	

}	
